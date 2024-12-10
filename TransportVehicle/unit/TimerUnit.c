/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * TimerUnit.c
 * �^�C�}�[�N���X
 *
 * �N���X��: TimerUnit(TU)
 * ����: timerStart, timerResult, timeOut, startTime, nowTime
 * ����: start, finish, isStart, isTimeout, alarmCallback
 * �֘A: common
 */

#include "TimerUnit.h"

/** �^�C�}�[�̊Ď���Ԃ�\���ϐ� �Ď�����TRUE(1)�C�Ď����ł͂Ȃ��Ƃ���FALSE(0)������ */
static int TU_timerStart = FALSE;
/** �^�C�}�[�̏�Ԃ�\���ϐ� �^�C���A�E�g�����Ƃ���TRUE(1)�C�^�C���A�E�g���Ă��Ȃ��Ƃ���FALSE(0)������ */
static int TU_timerResult = FALSE;
/** �^�C���A�E�g(ms)��\���ϐ� */
static int TU_timeOut = 0;
/** �^�C�}�[�Ď��J�n���̃V�X�e������ */
static SYSTIM TU_startTime;
/** ���݂̃V�X�e������ */
static SYSTIM TU_nowTime;

/* private�֐� */
static void TU_alarmCallback(void);

/**
 * �^�C�}�[�̊Ď����J�n����
 * @param msec �^�C���A�E�g�܂ł̎���(msec)
 */
void TU_start(int msec) {
	TU_timeOut = msec;
	get_tim(&TU_nowTime);
	TU_startTime = TU_nowTime;

	TU_timerResult = FALSE;
	TU_timerStart = TRUE;
}

/**
 * �^�C�}�[�̊Ď����I������
 */
void TU_finish(void) {
	TU_timeOut = 0;
	TU_startTime = 0;
	TU_nowTime = 0;

	TU_timerResult = FALSE;
	TU_timerStart = FALSE;
}

/**
 * �^�C�}�[�̊Ď���Ԃ�����
 * @return int �Ď�����TRUE(1)�C�Ď����ł͂Ȃ��Ƃ���FALSE(0)��Ԃ�
 */
int TU_isStart(void) {
	return TU_timerStart;
}

/**
 * �^�C�}�[�̏�Ԃ�����
 * @return int �^�C���A�E�g�̂Ƃ���TRUE(1)��Ԃ��C����ȊO��FALSE(0)��Ԃ�
 */
int TU_isTimeout(void) {
	TU_alarmCallback();
	return TU_timerResult;
}

/**
 * �^�C�}�[�Ď����s��
 */
static void TU_alarmCallback(void) {
	if (TU_timerStart) {
		get_tim(&TU_nowTime);

		if (TU_nowTime >= TU_startTime + TU_timeOut) {
			TU_nowTime = 0;
			TU_startTime = 0;
			TU_timerStart = FALSE;
			TU_timerResult = TRUE;
		}
	}
}
