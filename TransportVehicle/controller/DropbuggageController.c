/*
 * DropbuggageController.c
 * 荷降ろし制御クラス
 *
 * クラス名: DropbuggageController(DBC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LuggageCarrierUnit(LCU), HornUnit(HU), common
 */

#include "DropbuggageController.h"
#include "ActionController.h"

static void DBC_entry(void);
static void DBC_do_action(void);
static void DBC_exit(void);

/**
 * 荷降ろし制御
 */
void DBC_action(void) {
    if (pre_state != AC_STATUS_DROPBUGGAGE) {
        DBC_entry();
        pre_state = AC_STATUS_DROPBUGGAGE;
    }

    DBC_do_action();
}

/**
 * 入口処理
 */
static void DBC_entry(void) {

}

/**
 * 実処理
 */
static void DBC_do_action(void) {
    HU_warnSound();
    // 荷台の状態を示す
    if (LCU_isLoaded()) {
        // 荷台が押されている場合は状態を変更
        DBC_exit();
        cur_state = AC_STATUS_DELIVERY;
    }

    
}

/**
 * 出口処理
 */
static void DBC_exit(void) {
    // 必要に応じて出口処理を実装
} 