/*
 * DeliveryTurnController.h
 * 配達後反転制御クラス
 *
 * クラス名: DeliveryTurnController(DTC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), TimerUnit(TU), TurnleftController(TLC), common
 */

#ifndef DELIVERYTURN_CONTROLLER_H
#define DELIVERYTURN_CONTROLLER_H

#include "../com/common.h"
#include "../unit/MotorUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/TimerUnit.h"
#include "TurnleftController.h"

/**
 * 配達後反転制御
 */
extern void DTC_action(void);

#endif 