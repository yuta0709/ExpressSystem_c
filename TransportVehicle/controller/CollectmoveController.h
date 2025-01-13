/*
 * CollectmoveController.h
 * 収集移動状態の制御クラス
 *
 * クラス名: CollectmoveController(CMC)
 * 属性: なし
 * 操作: action
 * 関連: ActionController(AC), LineDriveController(LDC), WallMonitorUnit(WMU), 
 *       MotorUnit(MU), HornUnit(HU), common
 */

#ifndef __CollectmoveController_h__
#define __CollectmoveController_h__

//com
#include "../com/common.h"
//controller
#include "ActionController.h"
#include "LineDriveController.h"
//unit
#include "../unit/WallMonitorUnit.h"
#include "../unit/MotorUnit.h"
#include "../unit/HornUnit.h"

/*
 * 収集移動状態の制御
 */
extern void CMC_action(void);

#endif /* __CollectmoveController_h__ */ 