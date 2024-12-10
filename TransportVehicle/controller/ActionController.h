/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ActionController.h
 * 行動制御クラス
 *
 * クラス名: ActionController(AC)
 * 属性:
 * 操作:
 * 関連: LineDriveController(LDC), DeliveryController(DU), LuggageCarrierUnit(LCU),
 *       BumperUnit(BU), DisplayUnit(DU), WallMonitorUnit(WMU), HornUnit(HU), TimerUnit(TU),
 *       common
 */

#ifndef __ActionController_h__
#define __ActionController_h__

//com
#include "../com/common.h"
//controller
#include "./LineDriveController.h"
#include "./DeliveryController.h"
//unit
#include "../unit/ButtonUnit.h"
#include "../unit/LuggageCarrierUnit.h"
#include "../unit/WallMonitorUnit.h"
#include "../unit/DisplayUnit.h"
#include "../unit/HornUnit.h"
#include "../unit/TimerUnit.h"


/*
 * 行動制御の初期化処理
 */
extern void AC_pre(void);

/*
 * 行動制御の終了処理
 */
extern void AC_post(void);

/**
 * 行動制御
 */
extern void AC_controllAction(void);

#endif /* __ActionController_h__ */
