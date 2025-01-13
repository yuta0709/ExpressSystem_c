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

// ��Ԃ�\��enum�^�̒�`
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

// ��Ԃ�ύX���邽�߂̊֐�
extern void AC_changeStatus(enum AC_STATUS newStatus);

/*
 * �s������̏���������
 */
extern void AC_pre(void);

/*
 * �s������̏I������
 */
extern void AC_post(void);

/**
 * �s������
 */
extern void AC_controllAction(void);

#endif /* __ActionController_h__ */
