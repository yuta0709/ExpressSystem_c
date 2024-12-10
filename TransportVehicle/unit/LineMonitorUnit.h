/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LineMonitorUnit.h
 * ���C���Ď��N���X
 *
 * �N���X��: LineMonitorUnit(LMU)
 * ����: threshold
 * ����: pre, post, set_threshold, get_threshold, isOnLine
 * �֘A: common
 */

#ifndef __LineMonitorUnit_h__
#define __LineMonitorUnit_h__

//com
#include "../com/common.h"


/**
* ���C���Ď��̏���������(�J���[�Z���T�[�̏���������)
*/
extern void LMU_pre(void);

/**
 * ���C���Ď���臒l��ݒ肷��
 */
extern void LMU_set_threshold(int threshold);

/**
 * ���C���Ď���臒l���擾����
 * @return int �ݒ肳�ꂽ臒l�̒l��Ԃ�
 */
extern int LMU_get_threshold(void);

/**
 * ���C���Ď��̏�Ԃ�����
 * @return int 臒l���J���[�Z���T�[�̒l���傫��(�Â�)�Ƃ���TRUE(1)�C������(���邢)�Ƃ���FALSE(0)��Ԃ�
 */
extern int LMU_isOnLine(void);

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
extern int LMU_get_color(void);

#endif /**__LineMonitorUnit_h__ */
