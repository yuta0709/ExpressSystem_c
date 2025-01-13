/*
 * DeliveryController.c
 * �z�B����N���X
 *
 * �N���X��: DeliveryController(DLC)
 * ����: �Ȃ�
 * ����: action
 * �֘A: MotorUnit(MU), LineMonitorUnit(LMU), LuggageCarrierUnit(LCU), HornUnit(HU), LineDriveController(LDC), common
 */

#include "DeliveryController.h"
#include "ActionController.h"

// �z�B��̐F�������ϐ��̒�`
int target_color = 0;

static void DLC_entry(void);
static void DLC_do_action(void);
static void DLC_exit(void);

/**
 * �z�B����
 */
void DLC_action(void) {
    if (pre_state != AC_STATUS_DELIVERY) {
        DLC_entry();
        pre_state = AC_STATUS_DELIVERY;
    }

    DLC_do_action();
}

/**
 * ��������
 */
static void DLC_entry(void) {
    // �K�v�ɉ����ē�������������
}

/**
 * ������
 */
static void DLC_do_action(void) {
    // ���C�����g���[�X����
    LDC_do_linetrace();

    // �ב�̏�Ԃ�����
    if (!LCU_isLoaded()) {
        // �ב䂪������Ă��Ȃ��ꍇ
        MU_stop();
        DLC_exit();
        cur_state = AC_STATUS_UNLOADWAIT;
        return;
    }

    // �H�ʂ̐F������
    int current_color = LMU_get_color();
    
    if (current_color == target_color) {
        // �w�肳�ꂽ�z�B��̐F�����m�����ꍇ
        MU_stop();
        
        // ��������炷
        HU_arrivalSound();
        
        // ��Ԃ��׍~�낵�ҋ@�Ɉڂ�
        DLC_exit();
        cur_state = AC_STATUS_DROPBUGGAGE;
    }
}

/**
 * �o������
 */
static void DLC_exit(void) {
    // �K�v�ɉ����ďo������������
}