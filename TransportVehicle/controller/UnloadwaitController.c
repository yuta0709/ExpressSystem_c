/*
 * UnloadwaitController.c
 * 荷降ろし待機制御クラス
 *
 * クラス名: UnloadwaitController(UWC)
 * 属性: なし
 * 操作: action
 * 関連: TimerUnit(TU), LuggageCarrierUnit(LCU), DisplayUnit(DU), common
 */

#include "UnloadwaitController.h"
#include "ActionController.h"

static void UWC_entry(void);
static void UWC_do_action(void);
static void UWC_exit(void);

/**
 * 荷降ろし待機制御
 */
void UWC_action(void) {
    if (pre_state != AC_STATUS_UNLOADWAIT) {
        UWC_entry();
        pre_state = AC_STATUS_UNLOADWAIT;
    }

    UWC_do_action();
}

/**
 * 入口処理
 */
static void UWC_entry(void) {
    // タイマー監視を開始する
    TU_start(5000); // 5秒のタイマーを設定
}

/**
 * 実処理
 */
static void UWC_do_action(void) {
    // タイマーの状態を示す
    if (TU_isTimeout()) {
        // タイムアウトしている場合
        TU_finish();
        UWC_exit();
        cur_state = AC_STATUS_UNLOADREMIND;
        return;
    }

    // 荷台の状態を示す
    if (LCU_isLoaded()) {
        // 荷台が押されている場合
        TU_finish();
        UWC_exit();
        return;
    }

    // 荷台が押されていない場合
    UWC_exit();
    cur_state = AC_STATUS_DELIVERYTURN;
}

/**
 * 出口処理
 */
static void UWC_exit(void) {
    // 必要に応じて出口処理を実装
    TU_finish();
} 