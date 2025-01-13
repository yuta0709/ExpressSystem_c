/*
 * UnloadremindController.h
 * 荷降ろし催促制御クラス
 *
 * クラス名: UnloadremindController(URC)
 * 属性: なし
 * 操作: action
 * 関連: HornUnit(HU), LuggageCarrierUnit(LCU), common
 */

#ifndef UNLOADREMIND_CONTROLLER_H
#define UNLOADREMIND_CONTROLLER_H

#include "../com/common.h"
#include "../unit/HornUnit.h"
#include "../unit/LuggageCarrierUnit.h"

/**
 * 荷降ろし催促制御
 */
extern void URC_action(void);

#endif 