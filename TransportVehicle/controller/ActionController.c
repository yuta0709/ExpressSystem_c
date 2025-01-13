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

//**************************************
//�K�v�ɉ����Ĉȉ��Ƀv���O�������L�q����
//��������
//**************************************

// ���݂̏�Ԃ�ێ�����ϐ�
static enum AC_STATUS AC_currentStatus;

// ��Ԃ�ύX���邽�߂̊֐�
void AC_changeStatus(enum AC_STATUS newStatus) {
    AC_currentStatus = newStatus;
}

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

    // ������Ԃ�ݒ�
    AC_currentStatus = AC_STATUS_REQUESTWAIT;

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
    DU_showNumber(AC_currentStatus);

    /* ��Ԃɉ����������̎��s */
    switch (AC_currentStatus) {
        case AC_STATUS_REQUESTWAIT:
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
