/*
 * CollectturnController.c
 * 収集後反転制御クラス
 *
 * クラス名: CollectturnController(CTC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), TimerUnit(TU), TurnrightController(TRC), common
 */

#include "CollectturnController.h"
#include "ActionController.h"

static void CTC_entry(void);
static void CTC_do_action(void);
static void CTC_exit(void);

/**
 * 収集後反転制御
 */
void CTC_action(void) {
    if (pre_state != AC_STATUS_COLLECTTURN) {
        CTC_entry();
        pre_state = AC_STATUS_COLLECTTURN;
    }

    CTC_do_action();
}

/**
 * 入口処理
 */
static void CTC_entry(void) {
    // 必要に応じて入口処理を実装
}

/**
 * 実処理
 */
static void CTC_do_action(void) {
    // 右に反転する
    TRC_do_turnright();
    
    // 状態を配達中に移す
    CTC_exit();
    cur_state = AC_STATUS_DELIVERY;
}

/**
 * 出口処理
 */
static void CTC_exit(void) {
    // 必要に応じて出口処理を実装
} 