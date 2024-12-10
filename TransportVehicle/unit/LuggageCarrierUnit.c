/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LuggageCarrierUnit.c
 * �ב�N���X
 *
 * �N���X��: LuggageCarrierUnit(LCU)
 * ����: �Ȃ�
 * ����: isLoaded
 * �֘A: common
 */

#include "LuggageCarrierUnit.h"

/** �ב�Ɏg�p����^�b�`�Z���T�[�̐ڑ��|�[�g���w�肷��(�|�[�g2�ɐڑ�����ꍇ) */
#define LCU_PORT EV3_PORT_2

/*
 * �ב�̏���������(�^�b�`�Z���T�[�̏���������)
 */
void LCU_pre(void) {
	ev3_sensor_config(LCU_PORT, TOUCH_SENSOR);
}

/**
 * �ב�̏�Ԃ�����
 * @return int �ב�ɉו����u����Ă���Ƃ���TRUE(1)�A�u����Ă��Ȃ��Ƃ���FALSE(0)��Ԃ�
 */
int LCU_isLoaded(void) {
	return ev3_touch_sensor_is_pressed(LCU_PORT);
}
