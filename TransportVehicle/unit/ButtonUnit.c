/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ButtonUnit.c
 * �w���{�^���N���X
 *
 * �N���X��: ButtonUnit(BU)
 * ����: �Ȃ�
 * ����: isPushed
 * �֘A: common
 */

#include "ButtonUnit.h"

/* �w���{�^���Ɏg�p����^�b�`�Z���T�[�̐ڑ��|�[�g���w�肷��(�|�[�g1�ɐڑ�����ꍇ) */
#define BU_PORT EV3_PORT_1

/*
 * �w���{�^���̏���������(�^�b�`�Z���T�[�̏���������)
 */
void BU_pre(void) {
	ev3_sensor_config(BU_PORT, TOUCH_SENSOR);
}

/**
 * �w���{�^���̏�Ԃ�����
 * @return int �w���{�^����������Ă���Ƃ���TRUE(1)�A������Ă��Ȃ��Ƃ���FALSE(0)��Ԃ�
 */
int BU_isPushed(void) {
	return ev3_touch_sensor_is_pressed(BU_PORT);
}
