/*
 * CarrywaitController.h
 * 荷物積載待機状態の制御クラス
 *
 * クラス名: CarrywaitController(CWC)
 * 属性: destination
 * 操作: action
 * 関連: ActionController(AC), TimerUnit(TU), LuggageCarrierUnit(LCU), 
 *       LineMonitorUnit(LMU), common
 */

#ifndef __CarrywaitController_h__
#define __CarrywaitController_h__

//com
#include "../com/common.h"
//controller
#include "ActionController.h"
//unit
#include "../unit/TimerUnit.h"
#include "../unit/LuggageCarrierUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/MotorUnit.h"

/*
 * 荷物積載待機状態の制御
 */
extern void CWC_action(void);

#endif /* __CarrywaitController_h__ */ 