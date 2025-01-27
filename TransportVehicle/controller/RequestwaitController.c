/*
 * RequestwaitController.c
 * 収集指示待機状態の制御クラス
 *
 * クラス名: RequestwaitController(RWC)
 * 属性: なし
 * 操作: action
 * 関連: ActionController(AC), ButtonUnit(BU), common
 */

#include "RequestwaitController.h"
#include "../unit/WallMonitorUnit.h"

// 内部関数のプロトタイプ宣言
static void RWC_entry(void);
static void RWC_do(void);
static void RWC_exit(void);

// ボタンの前回の状態を保持
static int prev_button_state = FALSE;

/**
 * 収集指示待機状態の制御
 */
void RWC_action(void) {
    // entry処理（状態が変化した時のみ実行）
    if (pre_state != AC_STATUS_REQUESTWAIT) {
        RWC_entry();
        pre_state = cur_state;
    }

    if (WMU_isNear()){
        DU_showString("Near");
    }else{
        DU_showString("Far");
    }

    // do処理（毎回実行）
    RWC_do();

    // 現在のボタンの状態を取得
    int current_button_state = BU_isPushed();

    // ボタンが押されていた状態から離された場合
    if (prev_button_state && !current_button_state) {
        // 状態を収集移動中に遷移
        pre_state = cur_state;
        cur_state = AC_STATUS_COLLECTMOVE;
    }

    // ボタンの状態を記録
    prev_button_state = current_button_state;

    if(pre_state != cur_state){
        RWC_exit();
    }
}

/**
 * 収集指示待機状態のentry処理
 */
static void RWC_entry(void) {
    // ボタンの状態を初期化
    prev_button_state = FALSE;
}

/**
 * 収集指示待機状態のdo処理
 */
static void RWC_do(void) {
    // 特に処理なし
}

/**
 * 収集指示待機状態のexit処理
 */
static void RWC_exit(void) {
    // 特に処理なし
} 