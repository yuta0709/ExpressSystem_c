/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LineMonitorUnit.c
 * ���C���Ď��N���X
 *
 * �N���X��: LineMonitorUnit(LMU)
 * ����: threshold
 * ����: pre, post, set_threshold, get_threshold, isOnLine, get_color
 * �֘A: common
 */

#include "LineMonitorUnit.h"

 /** ���C���Ď��Ɏg�p����J���[�Z���T�[�̐ڑ�����|�[�g���w�肷��(�|�[�g3�ɐڑ�����ꍇ) */
#define LMU_PORT EV3_PORT_3

/** ���C������臒l */
static unsigned int LMU_threshold = 0;

/**
* ���C���Ď��̏���������(�J���[�Z���T�[�̏���������)
*/
void LMU_pre(void) {
	ev3_sensor_config(LMU_PORT, COLOR_SENSOR);
}

/**
 * ���C���Ď���臒l��ݒ肷��
 */
void LMU_set_threshold(int threshold) {
	LMU_threshold = threshold;
}

/**
 * ���C���Ď���臒l���擾����
 * @return int �ݒ肳�ꂽ臒l�̒l��Ԃ�
 */
int LMU_get_threshold(void) {
	return LMU_threshold;
}

/**
 * ���C���Ď��̏�Ԃ�����
 * @return int 臒l���J���[�Z���T�[�̒l��������(�Â�)�Ƃ���TRUE(1)�C�傫��(���邢)�Ƃ���FALSE(0)��Ԃ�
 */
int LMU_isOnLine(void) {
	if (ev3_color_sensor_get_reflect(LMU_PORT) < LMU_threshold) {
		return TRUE;
	}
	return FALSE;
}

/**
 * �H�ʂ̐F������
 * @return int �J���[�Z���T�[�Ŏ��ʂł���J���[�̔ԍ���Ԃ�
 *   COLOR_NONE		= 0
 *   COLOR_BLACK	= 1
 *   COLOR_BLUE		= 2
 *   COLOR_GREEN	= 3
 *   COLOR_YELLOW	= 4
 *   COLOR_RED		= 5
 *   COLOR_WHITE	= 6
 *   COLOR_BROWN	= 7
 */
int LMU_get_color(void) {
	return ev3_color_sensor_get_color(LMU_PORT);
}
