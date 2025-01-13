/*
 * DropbuggageController.h
 * 荷降ろし制御クラス
 *
 * クラス名: DropbuggageController(DBC)
 * 属性: なし
 * 操作: action
 * 関連: MotorUnit(MU), LuggageCarrierUnit(LCU), HornUnit(HU), common
 */

#ifndef DROPBUGGAGE_CONTROLLER_H
#define DROPBUGGAGE_CONTROLLER_H

#include "../com/common.h"
#include "../unit/MotorUnit.h"
#include "../unit/LuggageCarrierUnit.h"
#include "../unit/HornUnit.h"

/**
 * 荷降ろし制御
 */
extern void DBC_action(void);

#endif 