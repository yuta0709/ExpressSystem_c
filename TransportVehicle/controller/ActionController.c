/*
 * ActionController.c
 * �s������N���X
 *
 * �N���X��: ActionController(AC)
 * ����: �Ȃ�
 * ����: pre, post, controllAction
 * �֘A: LineDriveController(LDC), DeliveryController(DLC), LuggageCarrierUnit(LCU),
 *       BumperUnit(BU), DisplayUnit(DU), WallMonitorUnit(WMU), HornUnit(HU), TimerUnit(TU),
 *       common
 */

#include "ActionController.h"
#include "RequestwaitController.h"
#include "CollectmoveController.h"
#include "CarrywaitController.h"
#include "CarryremindController.h"
#include "CollectturnController.h"
#include "DeliveryController.h"
#include "DropbuggageController.h"
#include "UnloadwaitController.h"
#include "UnloadremindController.h"
#include "DeliveryTurnController.h"
#include "ReturnController.h"

// ��ԕϐ��̒�`
enum AC_STATUS cur_state = AC_STATUS_NO;
enum AC_STATUS pre_state = AC_STATUS_NO;

/**
 * �s������̏���������
 */
void AC_pre(void) {
    // ������Ԃ�ݒ�i����`��Ԃ���J�n�j
    pre_state = AC_STATUS_NO;
    cur_state = AC_STATUS_NO;
    
    // ������Ԃ֑J��
    cur_state = AC_STATUS_REQUESTWAIT;

    BU_pre();

    LCU_pre();

    LMU_pre();
    LMU_set_threshold(30);

    WMU_pre();
    WMU_set_threshold(10);

    MU_pre();
    MU_set_backwardSpeed(-30);
    MU_set_forwardSpeed(30);

    DU_pre();
    
    HU_pre();
    
    
    

}

/**
 * �s������̏I������
 */
void AC_post(void) {
    // �K�v�ɉ����ďI������������
}

/**
 * �s������
 */
void AC_controllAction(void) {
    /* ���݂̃X�e�[�^�X��\�� */
    DU_showNumber(cur_state);

    /* ��Ԃɉ����������̎��s */
    switch (cur_state) {
        case AC_STATUS_NO:
            break;
        case AC_STATUS_REQUESTWAIT:
            RWC_action();
            break;
        case AC_STATUS_COLLECTMOVE:
            CMC_action();
            break;
        case AC_STATUS_CARRYWAIT:
            CWC_action();
            break;
        case AC_STATUS_CARRYREMIND:
            CRC_action();
            break;
        case AC_STATUS_COLLECTTURN:
            CTC_action();
            break;
        case AC_STATUS_DELIVERY:
            DLC_action();
            break;
        case AC_STATUS_DROPBUGGAGE:
            DBC_action();
            break;
        case AC_STATUS_UNLOADWAIT:
            UWC_action();
            break;
        case AC_STATUS_UNLOADREMIND:
            URC_action();
            break;
        case AC_STATUS_DELIVERYTURN:
            DTC_action();
            break;
        case AC_STATUS_RETURN:
            RTC_action();
            break;
    }
}
