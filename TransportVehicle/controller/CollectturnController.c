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

/**
 * 収集後反転制御
 */
void CTC_action(void) {
    // 右に反転する
    TRC_do_turnright();
    
    // 状態を配達中に移す
    cur_state = AC_STATUS_DERIVER;
} 