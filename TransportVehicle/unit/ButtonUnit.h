/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ButtonUnit.h
 * �w���{�^���N���X
 *
 * �N���X��: ButtonUnit(BU)
 * ����: �Ȃ�
 * ����: isPushed
 * �֘A: common
 */

#ifndef __ButtonUnit_h__
#define __ButtonUnit_h__

//com
#include "../com/common.h"

/*
 * �w���{�^���̏���������(�^�b�`�Z���T�[�̏���������)
 */
void BU_pre(void);

/*
 * �w���{�^���̏�Ԃ�����
 * @return int �o���p�[��������Ă���Ƃ���TRUE(1)�A������Ă��Ȃ��Ƃ���FALSE(0)��Ԃ�
 */
extern int BU_isPushed(void);

#endif /**__ButtonUnit_h__ */
