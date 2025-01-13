/*
 * ReturnController.h
 * 帰還制御クラス
 *
 * クラス名: ReturnController(RTC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), LineDriveController(LDC), common
 */

#ifndef RETURN_CONTROLLER_H
#define RETURN_CONTROLLER_H

#include "../com/common.h"
#include "../unit/MotorUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "LineDriveController.h"

/**
 * 帰還制御
 */
extern void RTC_action(void);

#endif 