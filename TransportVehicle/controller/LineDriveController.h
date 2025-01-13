/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LineDriveController.h
 * ���C���g���[�X����N���X
 *
 * �N���X��: LineDriveController(LDC)
 * ����: �Ȃ�
 * ����:
 * �֘A: LineMonitorUnit(LMU), MotorUnit(MU), SideMonitorUnit(SMU), common
 */

#ifndef __LineDriveController_h__
#define __LineDriveController_h__

//com
#include "../com/common.h"
//unit
#include "../unit/LineMonitorUnit.h"
#include "../unit/MotorUnit.h"

/**
 * ���C���g���[�X����
 */
extern void LDC_do_linetrace(void);

#endif /* __LineDriveController_h__ */
