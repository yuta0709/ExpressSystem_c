/*
 * CarryremindController.c
 * 荷物積載催促状態の制御クラス
 *
 * クラス名: CarryremindController(CRC)
 * 属性: destination
 * 操作: action
 * 関連: ActionController(AC), HornUnit(HU), LuggageCarrierUnit(LCU), 
 *       LineMonitorUnit(LMU), MotorUnit(MU), common
 */

#include "CarryremindController.h"

// 内部関数のプロトタイプ宣言
static void CRC_entry(void);
static void CRC_do(void);
static void CRC_exit(void);

// 配達先を保持する変数
static int destination = 0;

/**
 * 荷物積載催促状態の制御
 */
void CRC_action(void) {
    // entry処理（状態が変化した時のみ実行）
    if (pre_state != AC_STATUS_CARRYREMIND) {
        CRC_entry();
        pre_state = cur_state;
    }

    // do処理（毎回実行）
    CRC_do();

    // 荷台に荷物が置かれた場合
    if (LCU_isLoaded()) {
        // カラーセンサの値を配達先として設定
        destination = LMU_get_color();
        // 後退する
        MU_backward();
        // 状態を収集後反転中に遷移
        pre_state = cur_state;
        cur_state = AC_STATUS_COLLECTTURN;
    }

    // 状態が変化した場合のexit処理
    if (pre_state != cur_state) {
        CRC_exit();
    }
}

/**
 * 荷物積載催促状態のentry処理
 */
static void CRC_entry(void) {
    // 確認音を鳴らす
    HU_confirmSound();
}

/**
 * 荷物積載催促状態のdo処理
 */
static void CRC_do(void) {
}

/**
 * 荷物積載催促状態のexit処理
 */
static void CRC_exit(void) {
    // 特に終了処理なし
} 