/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * WallMonitorUnit.h
 * ��ǊĎ��N���X
 *
 * �N���X��: WallMonitorUnit(WMU)
 * ����: threshold
 * ����: set_threshold, get_threshold, isNear, pre, post
 * �֘A: common
 */

#ifndef __WallMonitorUnit_h__
#define __WallMonitorUnit_h__

//com
#include "../com/common.h"

/**
 * ��ǊĎ��̏���������(�����g�Z���T�[�̏���������)
 */
extern void WMU_pre(void);

/**
 * ��ǊĎ���臒l��ݒ肷��
 */
extern void WMU_set_threshold(int threshold);

/**
 * ��ǊĎ���臒l���擾����
 * @return int �ݒ肳�ꂽ臒l�̒l��Ԃ�
 */
extern int WMU_get_threshold(void);

/**
 * ��ǊĎ��̏�Ԃ�����
 * @return int 臒l��蒴���g�Z���T�[�̒l��������(�߂�)�Ƃ���TRUE(1)�C�傫��(����)�Ƃ���FALSE(0)��Ԃ�
 */
extern int WMU_isNear(void);

#endif /**__WallMonitorUnit_h__ */
