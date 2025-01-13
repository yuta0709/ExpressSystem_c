/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LineDriveController.c
 * ���C���g���[�X����N���X
 *
 * �N���X��: LineDriveController(LDC)
 * ����: �Ȃ�
 * ����:
 * �֘A: LineMonitorUnit(LMU), MotorUnit(MU), SideMonitorUnit(SMU), common
 */

#include "LineDriveController.h"

//**************************************
//�K�v�ɉ����Ĉȉ��Ƀv���O�������L�q����
//��������
//**************************************

/**
 * ���C���g���[�X����
 */
void LDC_do_linetrace(void) {
    // ���C���Ď��̏�Ԃ��擾�iTRUE: �Â�, FALSE: ���邢�j
    int is_on_dark = LMU_isOnLine();

    if (!is_on_dark) {
        // ���邢�Ƃ��i���C���̊O�j�͉E�ɋȂ���
        MU_pivotRight();
    } else {
        // �Â��Ƃ��i���C���̏�j�͍��ɋȂ���
        MU_pivotLeft();
    }
}

//**************************************
//�����܂�
//**************************************
