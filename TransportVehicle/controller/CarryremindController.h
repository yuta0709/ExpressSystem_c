/*
 * CarryremindController.h
 * 荷物積載催促状態の制御クラス
 *
 * クラス名: CarryremindController(CRC)
 * 属性: destination
 * 操作: action
 * 関連: ActionController(AC), HornUnit(HU), LuggageCarrierUnit(LCU), 
 *       LineMonitorUnit(LMU), MotorUnit(MU), common
 */

#ifndef __CarryremindController_h__
#define __CarryremindController_h__

//com
#include "../com/common.h"
//controller
#include "ActionController.h"
//unit
#include "../unit/HornUnit.h"
#include "../unit/LuggageCarrierUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/MotorUnit.h"
#include "../unit/TimerUnit.h"

/*
 * 荷物積載催促状態の制御
 */
extern void CRC_action(void);

#endif /* __CarryremindController_h__ */ 