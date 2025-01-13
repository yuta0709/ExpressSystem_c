/*
 * DeriverController.c
 * 配達制御クラス
 *
 * クラス名: DeriverController(DC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), LuggageCarrierUnit(LCU), HornUnit(HU), LineDriveController(LDC), common
 */

#include "DeriverController.h"
#include "ActionController.h"

// 配達先の色を示す変数の定義
int target_color = 0;

static void DC_entry(void);
static void DC_do_action(void);
static void DC_exit(void);

/**
 * 配達制御
 */
void DC_action(void) {
    if (pre_state != AC_STATUS_DERIVER) {
        DC_entry();
        pre_state = AC_STATUS_DERIVER;
    }

    DC_do_action();
}

/**
 * 入口処理
 */
static void DC_entry(void) {
    // 必要に応じて入口処理を実装
}

/**
 * 実処理
 */
static void DC_do_action(void) {
    // ラインをトレースする
    LDC_do_linetrace();

    // 荷台の状態を示す
    if (!LCU_isLoaded()) {
        // 荷台が押されていない場合
        MU_stop();
        DC_exit();
        cur_state = AC_STATUS_UNLOADWAIT;
        return;
    }

    // 路面の色を示す
    int current_color = LMU_get_color();
    
    if (current_color == target_color) {
        // 指定された配達先の色を検知した場合
        MU_stop();
        
        // 到着音を鳴らす
        HU_ringArrive();
        
        // 状態を荷降ろし待機に移す
        DC_exit();
        cur_state = AC_STATUS_DROPBUGGAGE;
    }
}

/**
 * 出口処理
 */
static void DC_exit(void) {
    // 必要に応じて出口処理を実装
} 