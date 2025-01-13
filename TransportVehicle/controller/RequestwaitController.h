/*
 * RequestwaitController.h
 * 収集指示待機状態の制御クラス
 *
 * クラス名: RequestwaitController(RWC)
 * 属性: なし
 * 操作: action
 * 関連: ActionController(AC), ButtonUnit(BU), common
 */

#ifndef __RequestwaitController_h__
#define __RequestwaitController_h__

//com
#include "../com/common.h"
//controller
#include "ActionController.h"

/*
 * 収集指示待機状態の制御
 */
extern void RWC_action(void);

#endif /* __RequestwaitController_h__ */ 