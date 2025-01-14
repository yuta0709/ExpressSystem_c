/*
 * CarrywaitController.c
 * 荷物積載待機状態の制御クラス
 *
 * クラス名: CarrywaitController(CWC)
 * 属性: destination
 * 操作: action
 * 関連: ActionController(AC), TimerUnit(TU), LuggageCarrierUnit(LCU), common
 */

#include "CarrywaitController.h"
#include "DeliveryController.h"

// 内部関数のプロトタイプ宣言
static void CWC_entry(void);
static void CWC_do(void);
static void CWC_exit(void);

/**
 * 荷物積載待機状態の制御
 */
void CWC_action(void) {
    // entry処理（状態が変化した時のみ実行）
    if (pre_state != AC_STATUS_CARRYWAIT) {
        CWC_entry();
        pre_state = cur_state;
    }

    // do処理（毎回実行）
    CWC_do();

    // タイムアウトしている場合は荷物積載催促状態へ
    if (TU_isTimeout()) {
        cur_state = AC_STATUS_CARRYREMIND;
        CWC_exit();
        return;
    }

    // 荷台に荷物が置かれた場合
    if (LCU_isLoaded()) {
        // カラーセンサの値を配達先として設定

        target_color = LMU_get_color();
        if(target_color == 2 || target_color == 4 || target_color == 5) {
            // 後退する
            MU_backward();
            // 状態を収集後反転中に遷移
            pre_state = cur_state;
            cur_state = AC_STATUS_COLLECTTURN;
        }
    }

    // 状態が変化した場合のexit処理
    if (pre_state != cur_state) {
        CWC_exit();
    }
}

/**
 * 荷物積載待機状態のentry処理
 */
static void CWC_entry(void) {
    // タイマー監視を開始（10秒）
    TU_start(10000);
}

/**
 * 荷物積載待機状態のdo処理
 */
static void CWC_do(void) {
    // 特に処理なし
}

/**
 * 荷物積載待機状態のexit処理
 */
static void CWC_exit(void) {
    // タイマー監視を終了
    TU_finish();
} 