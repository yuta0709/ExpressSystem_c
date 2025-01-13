/*
 * UnloadwaitController.h
 * 荷降ろし待機制御クラス
 *
 * クラス名: UnloadwaitController(UWC)
 * 属性: なし
 * 操作: action
 * 関連: TimerUnit(TU), LuggageCarrierUnit(LCU), DisplayUnit(DU), common
 */

#ifndef UNLOADWAIT_CONTROLLER_H
#define UNLOADWAIT_CONTROLLER_H

#include "../com/common.h"
#include "../unit/TimerUnit.h"
#include "../unit/LuggageCarrierUnit.h"
#include "../unit/DisplayUnit.h"

/**
 * 荷降ろし待機制御
 */
extern void UWC_action(void);

#endif 