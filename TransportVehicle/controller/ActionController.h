/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ActionController.h
 * �s������N���X
 *
 * �N���X��: ActionController(AC)
 * ����:
 * ����:
 * �֘A: LineDriveController(LDC), DeliveryController(DU), LuggageCarrierUnit(LCU),
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
 * �??????????���
 */
extern void AC_pre(void);

/*
 * �?????????���
 */
extern void AC_post(void);

/**
 * �????
 */
extern void AC_controllAction(void);

#endif /* __ActionController_h__ */
