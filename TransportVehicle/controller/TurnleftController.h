/*
 * TurnleftController.h
 * 左回転制御クラス
 *
 * クラス名: TurnleftController(TLC)
 * 属性: なし
 * 操作: do_turnleft
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), TimerUnit(TU), common
 */

#ifndef TURNLEFT_CONTROLLER_H
#define TURNLEFT_CONTROLLER_H

#include "../com/common.h"
#include "../unit/MotorUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/TimerUnit.h"

/**
 * 左回転制御
 */
extern void TLC_do_turnleft(void);

#endif 