/*
 * DeriverController.h
 * 配達制御クラス
 *
 * クラス名: DeriverController(DC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), LuggageCarrierUnit(LCU), HornUnit(HU), LineDriveController(LDC), common
 */

#ifndef DERIVER_CONTROLLER_H
#define DERIVER_CONTROLLER_H

#include "../com/common.h"
#include "../unit/MotorUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/LuggageCarrierUnit.h"
#include "../unit/HornUnit.h"
#include "LineDriveController.h"

// 配達先の色を示す変数の宣言
extern int target_color;

/**
 * 配達制御
 */
extern void DC_action(void);

#endif 