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

// 状態を表すenum型の定義
enum AC_STATUS {
    AC_STATUS_REQUESTWAIT,         
    AC_STATUS_COLLECTMOVE,
    AC_STATUS_CARRYWAIT,
    AC_STATUS_CARRYREMIND,
    AC_STATUS_COLLECTTURN,
    AC_STATUS_DERIVER,
    AC_STATUS_DROPBUGGAGE,
    AC_STATUS_UNLOADWAIT,
    AC_STATUS_UNLOADREMIND,
    AC_STATUS_DERIVERTURN,
    AC_STATUS_RETURN,
};

// 状態を変更するための関数
extern void AC_changeStatus(enum AC_STATUS newStatus);

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
