/*
 * UnloadremindController.c
 * 荷降ろし催促制御クラス
 *
 * クラス名: UnloadremindController(URC)
 * 属性: なし
 * 操作: action
 * 関連: HornUnit(HU), LuggageCarrierUnit(LCU), common
 */

#include "UnloadremindController.h"
#include "ActionController.h"

static void URC_entry(void);
static void URC_do_action(void);
static void URC_exit(void);

/**
 * 荷降ろし催促制御
 */
void URC_action(void) {
    if (pre_state != AC_STATUS_UNLOADREMIND) {
        URC_entry();
        pre_state = AC_STATUS_UNLOADREMIND;
    }

    URC_do_action();
}

/**
 * 入口処理
 */
static void URC_entry(void) {
    // 必要に応じて入口処理を実装
}

/**
 * 実処理
 */
static void URC_do_action(void) {
    // 確認音を鳴らす
    HU_confirmSound();
    // 荷台の状態を示す
    if (LCU_isLoaded()) {
        URC_exit();
        cur_state = AC_STATUS_DELIVERYTURN;
    }
    
}

/**
 * 出口処理
 */
static void URC_exit(void) {
    // 必要に応じて出口処理を実装
} 