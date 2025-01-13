/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LineDriveController.h
 * ライントレース制御クラス
 *
 * クラス名: LineDriveController(LDC)
 * 属性: なし
 * 操作:
 * 関連: LineMonitorUnit(LMU), MotorUnit(MU), SideMonitorUnit(SMU), common
 */

#ifndef __LineDriveController_h__
#define __LineDriveController_h__

//com
#include "../com/common.h"
//unit
#include "../unit/LineMonitorUnit.h"
#include "../unit/MotorUnit.h"

/**
 * ライントレース制御
 */
extern void LDC_do_linetrace(void);

#endif /* __LineDriveController_h__ */
