/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LineMonitorUnit.h
 * ライン監視クラス
 *
 * クラス名: LineMonitorUnit(LMU)
 * 属性: threshold
 * 操作: pre, post, set_threshold, get_threshold, isOnLine
 * 関連: common
 */

#ifndef __LineMonitorUnit_h__
#define __LineMonitorUnit_h__

//com
#include "../com/common.h"


/**
* ライン監視の初期化処理(カラーセンサーの初期化処理)
*/
extern void LMU_pre(void);

/**
 * ライン監視の閾値を設定する
 */
extern void LMU_set_threshold(int threshold);

/**
 * ライン監視の閾値を取得する
 * @return int 設定された閾値の値を返す
 */
extern int LMU_get_threshold(void);

/**
 * ライン監視の状態を示す
 * @return int 閾値よりカラーセンサーの値が大きい(暗い)ときにTRUE(1)，小さい(明るい)ときにFALSE(0)を返す
 */
extern int LMU_isOnLine(void);

/**
 * 路面の色を示す
 * @return int カラーセンサーで識別できるカラーの番号を返す
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
