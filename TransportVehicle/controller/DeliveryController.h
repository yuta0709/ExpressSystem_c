/*
 * DeliveryController.h
 * �z�B����N���X
 *
 * �N���X��: DeliveryController(DLC)
 * ����: �Ȃ�
 * ����: action
 * �֘A: MotorUnit(MU), LineMonitorUnit(LMU), LuggageCarrierUnit(LCU), HornUnit(HU), LineDriveController(LDC), common
 */

#ifndef DELIVERY_CONTROLLER_H
#define DELIVERY_CONTROLLER_H

#include "../com/common.h"
#include "../unit/MotorUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/LuggageCarrierUnit.h"
#include "../unit/HornUnit.h"
#include "LineDriveController.h"

// �z�B��̐F�������ϐ�
extern int target_color;

/**
 * �z�B����
 */
extern void DLC_action(void);

#endif
