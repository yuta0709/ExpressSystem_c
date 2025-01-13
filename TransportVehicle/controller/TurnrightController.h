/*
 * TurnrightController.h
 * 右回転制御クラス
 *
 * クラス名: TurnrightController(TRC)
 * 属性: なし
 * 操作: do_turnright
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), TimerUnit(TU), common
 */

#ifndef TURNRIGHT_CONTROLLER_H
#define TURNRIGHT_CONTROLLER_H

#include "../com/common.h"
#include "../unit/MotorUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/TimerUnit.h"

/**
 * 右回転制御
 */
extern void TRC_do_turnright(void);

#endif 