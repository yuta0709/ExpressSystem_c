/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ActionController.h
 * �s������N���X
 *
 * �N���X��: ActionController(AC)
 * ����: �Ȃ�
 * ����: pre, post, controllAction
 * �֘A: LineDriveController(LDC), DeliveryController(DLC), LuggageCarrierUnit(LCU),
 *       BumperUnit(BU), DisplayUnit(DU), WallMonitorUnit(WMU), HornUnit(HU), TimerUnit(TU),
 *       common
 */

#ifndef ACTION_CONTROLLER_H
#define ACTION_CONTROLLER_H

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

// ��Ԃ�\���񋓌^
enum AC_STATUS {
    AC_STATUS_NO = 0,
    AC_STATUS_REQUESTWAIT,
    AC_STATUS_COLLECTMOVE,
    AC_STATUS_CARRYWAIT,
    AC_STATUS_CARRYREMIND,
    AC_STATUS_COLLECTTURN,
    AC_STATUS_DELIVERY,
    AC_STATUS_DROPBUGGAGE,
    AC_STATUS_UNLOADWAIT,
    AC_STATUS_UNLOADREMIND,
    AC_STATUS_DELIVERYTURN,
    AC_STATUS_RETURN
};

// ��ԕϐ��̐錾
extern enum AC_STATUS cur_state;
extern enum AC_STATUS pre_state;

/**
 * �s������̏���������
 */
extern void AC_pre(void);

/**
 * �s������̏I������
 */
extern void AC_post(void);

/**
 * �s������
 */
extern void AC_controllAction(void);

#endif
