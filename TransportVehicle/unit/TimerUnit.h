/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * TimerUnit.h
 * �^�C�}�[�N���X
 *
 * �N���X��: TimerUnit(TU)
 * ����: timerResult, timerCount, interval, timeOut, timerStart
 * ����: start, finish, isStart, isTimeout
 * �֘A: common
 */

#ifndef __TimerUnit_h__
#define __TimerUnit_h__

//com
#include "../com/common.h"

/**
 * �^�C�}�[�̊Ď����J�n����
 * @param msec �^�C���A�E�g�܂ł̎���(msec)
 */
extern void TU_start(int msec);

/**
 * �^�C�}�[�̊Ď����I������
 */
extern void TU_finish(void);

/**
 * �^�C�}�[�̊Ď���Ԃ�����
 * @return int �Ď�����TRUE(1)�C�Ď����ł͂Ȃ��Ƃ���FALSE(0)��Ԃ�
 */
extern int TU_isStart(void);

/**
 * �^�C�}�[�̏�Ԃ�����
 * @return int �^�C���A�E�g�̂Ƃ���TRUE(1)��Ԃ��C����ȊO��FALSE(0)��Ԃ�
 */
extern int TU_isTimeout(void);


#endif /**__TimerUnit_h__ */
