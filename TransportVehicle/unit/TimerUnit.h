/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * TimerUnit.h
 * タイマークラス
 *
 * クラス名: TimerUnit(TU)
 * 属性: timerResult, timerCount, interval, timeOut, timerStart
 * 操作: start, finish, isStart, isTimeout
 * 関連: common
 */

#ifndef __TimerUnit_h__
#define __TimerUnit_h__

//com
#include "../com/common.h"

/**
 * タイマーの監視を開始する
 * @param msec タイムアウトまでの時間(msec)
 */
extern void TU_start(int msec);

/**
 * タイマーの監視を終了する
 */
extern void TU_finish(void);

/**
 * タイマーの監視状態を示す
 * @return int 監視中はTRUE(1)，監視中ではないときはFALSE(0)を返す
 */
extern int TU_isStart(void);

/**
 * タイマーの状態を示す
 * @return int タイムアウトのときはTRUE(1)を返し，それ以外はFALSE(0)を返す
 */
extern int TU_isTimeout(void);


#endif /**__TimerUnit_h__ */
