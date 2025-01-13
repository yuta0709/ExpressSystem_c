/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ActionController.c
 * �s������N���X
 *
 * �N���X��: ActionController(AC)
 * ����:
 * ����: 
 * �֘A: LineDriveController(LDC), DeliveryController(DU), LuggageCarrierUnit(LCU),
 *       BumperUnit(BU), DisplayUnit(DU), WallMonitorUnit(WMU), HornUnit(HU), TimerUnit(TU),
 *       common
 */

#include "ActionController.h"
#include "RequestwaitController.h"

//**************************************
//�K�v�ɉ����Ĉȉ��Ƀv���O�������L�q����
//��������
//**************************************

// ��ԕϐ��̒�`
enum AC_STATUS cur_state = AC_STATUS_NO;
enum AC_STATUS pre_state = AC_STATUS_NO;

//**************************************
//�����܂�
//**************************************

/**
 * �s������̏���������
 */
void AC_pre(void) {
//**************************************
//�K�v�ɉ����Ĉȉ��Ƀv���O�������L�q����
//��������
//**************************************

    // ������Ԃ�ݒ�i����`��Ԃ���J�n�j
    pre_state = AC_STATUS_NO;
    cur_state = AC_STATUS_NO;
    
    // ������Ԃ֑J��
    cur_state = AC_STATUS_REQUESTWAIT;

//**************************************
//�����܂�
//**************************************
}

/**
 * �s������̏I������
 */
void AC_post(void) {
//**************************************
//�K�v�ɉ����Ĉȉ��Ƀv���O�������L�q����
//��������
//**************************************

    // �K�v�ɉ����ďI������������

//**************************************
//�����܂�
//**************************************
}

/**
 * �s������
 */
void AC_controllAction(void) {
//**************************************
//�K�v�ɉ����Ĉȉ��Ƀv���O�������L�q����
//��������
//**************************************

    /* ���݂̃X�e�[�^�X��\�� */
    DU_showNumber(cur_state);

    /* ��Ԃɉ����������̎��s */
    switch (cur_state) {
        case AC_STATUS_NO:
            break;
        case AC_STATUS_REQUESTWAIT:
            requestwait_action();
            break;
        case AC_STATUS_COLLECTMOVE:
            break;
        case AC_STATUS_CARRYWAIT:
            break;
        case AC_STATUS_CARRYREMIND:
            break;
        case AC_STATUS_COLLECTTURN:
            break;
        case AC_STATUS_DERIVER:
            break;
        case AC_STATUS_DROPBUGGAGE:
            break;
        case AC_STATUS_UNLOADWAIT:
            break;
        case AC_STATUS_UNLOADREMIND:
            break;
        case AC_STATUS_DERIVERTURN:
            break;
        case AC_STATUS_RETURN:
            break;
    }

//**************************************
//�����܂�
//**************************************
}
