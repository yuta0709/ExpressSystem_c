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

void C_LineDrive(void){
    //���C���̊Ď���Ԃ̎擾
    line_status = LMU_isOnLine();

    //���邩������E�ɋȂ���/�Â������獶�ɋȂ���
    if(line_status == 0){
        MU_pivotRight();
    }else{
        MU_pivotLeft();
    }
}





//**************************************
//�����܂�
//**************************************
