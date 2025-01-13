/*
 * CollectturnController.h
 * 収集後反転制御クラス
 *
 * クラス名: CollectturnController(CTC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), TimerUnit(TU), TurnrightController(TRC), common
 */

#ifndef COLLECTTURN_CONTROLLER_H
#define COLLECTTURN_CONTROLLER_H

#include "../com/common.h"
#include "../unit/MotorUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/TimerUnit.h"
#include "TurnrightController.h"

/**
 * 収集後反転制御
 */
extern void CTC_action(void);

#endif 