/*
 * DeliveryTurnController.c
 * 配達後反転制御クラス
 *
 * クラス名: DeliveryTurnController(DTC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), TimerUnit(TU), TurnleftController(TLC), common
 */

#include "DeliveryTurnController.h"
#include "ActionController.h"

static void DTC_entry(void);
static void DTC_do_action(void);
static void DTC_exit(void);

/**
 * 配達後反転制御
 */
void DTC_action(void) {
    if (pre_state != AC_STATUS_DELIVERYTURN) {
        DTC_entry();
        pre_state = AC_STATUS_DELIVERYTURN;
    }

    DTC_do_action();
}

/**
 * 入口処理
 */
static void DTC_entry(void) {
    // 必要に応じて入口処理を実装
}

/**
 * 実処理
 */
static void DTC_do_action(void) {
    // 左に反転する
    TLC_do_turnleft();
    
    // 状態を帰還中に移す
    DTC_exit();
    cur_state = AC_STATUS_RETURN;
}

/**
 * 出口処理
 */
static void DTC_exit(void) {
    // 必要に応じて出口処理を実装
} 