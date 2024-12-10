/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * TimerUnit.c
 * タイマークラス
 *
 * クラス名: TimerUnit(TU)
 * 属性: timerStart, timerResult, timeOut, startTime, nowTime
 * 操作: start, finish, isStart, isTimeout, alarmCallback
 * 関連: common
 */

#include "TimerUnit.h"

/** タイマーの監視状態を表す変数 監視中はTRUE(1)，監視中ではないときはFALSE(0)を示す */
static int TU_timerStart = FALSE;
/** タイマーの状態を表す変数 タイムアウトしたときはTRUE(1)，タイムアウトしていないときはFALSE(0)を示す */
static int TU_timerResult = FALSE;
/** タイムアウト(ms)を表す変数 */
static int TU_timeOut = 0;
/** タイマー監視開始時のシステム時刻 */
static SYSTIM TU_startTime;
/** 現在のシステム時刻 */
static SYSTIM TU_nowTime;

/* private関数 */
static void TU_alarmCallback(void);

/**
 * タイマーの監視を開始する
 * @param msec タイムアウトまでの時間(msec)
 */
void TU_start(int msec) {
	TU_timeOut = msec;
	get_tim(&TU_nowTime);
	TU_startTime = TU_nowTime;

	TU_timerResult = FALSE;
	TU_timerStart = TRUE;
}

/**
 * タイマーの監視を終了する
 */
void TU_finish(void) {
	TU_timeOut = 0;
	TU_startTime = 0;
	TU_nowTime = 0;

	TU_timerResult = FALSE;
	TU_timerStart = FALSE;
}

/**
 * タイマーの監視状態を示す
 * @return int 監視中はTRUE(1)，監視中ではないときはFALSE(0)を返す
 */
int TU_isStart(void) {
	return TU_timerStart;
}

/**
 * タイマーの状態を示す
 * @return int タイムアウトのときはTRUE(1)を返し，それ以外はFALSE(0)を返す
 */
int TU_isTimeout(void) {
	TU_alarmCallback();
	return TU_timerResult;
}

/**
 * タイマー監視を行う
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
