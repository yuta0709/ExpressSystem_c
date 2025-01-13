/*
 * ReturnController.c
 * 帰還制御クラス
 *
 * クラス名: ReturnController(RTC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), LineDriveController(LDC), common
 */

#include "ReturnController.h"
#include "ActionController.h"

#define STANDBY_COLOR COLOR_GREEN

static void RTC_entry(void);
static void RTC_do_action(void);
static void RTC_exit(void);

/**
 * 帰還制御
 */
void RTC_action(void) {
    if (pre_state != AC_STATUS_RETURN) {
        RTC_entry();
        pre_state = AC_STATUS_RETURN;
    }

    RTC_do_action();
}

/**
 * 入口処理
 */
static void RTC_entry(void) {
    // 必要に応じて入口処理を実装
}

/**
 * 実処理
 */
static void RTC_do_action(void) {
    // ラインをトレースする
    LDC_do_linetrace();

    // 路面の色を示す
    int current_color = LMU_get_color();
    
    // 待機場所の色を検知した場合
    if (current_color == STANDBY_COLOR) {
        cur_state = AC_STATUS_REQUESTWAIT;
        // 停止する
        MU_stop();
        RTC_exit();
    }
}

/**
 * 出口処理
 */
static void RTC_exit(void) {
    // 必要に応じて出口処理を実装
} 