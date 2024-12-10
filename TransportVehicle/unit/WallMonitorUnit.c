/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * WallMonitorUnit.c
 * ��ǊĎ��N���X
 *
 * �N���X��: WallMonitorUnit(WMU)
 * ����: threshold
 * ����: set_threshold, get_threshold, isNear, pre, post
 * �֘A: common
 */

#include "WallMonitorUnit.h"

/** ��ǊĎ��Ɏg�p���钴���g�Z���T�[��ڑ�����|�[�g���w�肷��(�|�[�g4�ɐڑ�����ꍇ) */
#define WMU_PORT EV3_PORT_4

/** ��ǋ�������臒l */
static unsigned int WMU_threshold = 0;

/**
 * ��ǊĎ��̏���������(�����g�Z���T�[�̏���������)
 */
void WMU_pre(void) {
	ev3_sensor_config(WMU_PORT, ULTRASONIC_SENSOR);
}

/**
 * ��ǊĎ���臒l��ݒ肷��
 */
void WMU_set_threshold(int threshold) {
	WMU_threshold = threshold;
}

/**
 * ��ǊĎ���臒l���擾����
 * @return int �ݒ肳�ꂽ臒l�̒l��Ԃ�
 */
int WMU_get_threshold(void) {
	return WMU_threshold;
}

/**
 * ��ǊĎ��̏�Ԃ�����
 * @return int 臒l��蒴���g�Z���T�[�̒l��������(�߂�)�Ƃ���TRUE(1)�C�傫��(����)�Ƃ���FALSE(0)��Ԃ�
 */
int WMU_isNear(void) {
	if (ev3_ultrasonic_sensor_get_distance(WMU_PORT) < WMU_threshold) {
		return TRUE;
	}
	return FALSE;
}
