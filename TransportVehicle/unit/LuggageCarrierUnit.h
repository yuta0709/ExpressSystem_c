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

#ifndef __LuggageCarrierUnit_h__
#define __LuggageCarrierUnit_h__

//com
#include "../com/common.h"

 /*
 * �ב�̏���������(�^�b�`�Z���T�[�̏���������)
 */
void LCU_pre(void);

/**
 * �ב�̏�Ԃ�����
 * @return int �ב�ɉו����u����Ă���Ƃ���TRUE(1)�A�u����Ă��Ȃ��Ƃ���FALSE(0)��Ԃ�
 */
extern int LCU_isLoaded(void);

#endif /**__LuggageCarrierUnit_h__ */
