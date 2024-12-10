/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * WallMonitorUnit.h
 * 障壁監視クラス
 *
 * クラス名: WallMonitorUnit(WMU)
 * 属性: threshold
 * 操作: set_threshold, get_threshold, isNear, pre, post
 * 関連: common
 */

#ifndef __WallMonitorUnit_h__
#define __WallMonitorUnit_h__

//com
#include "../com/common.h"

/**
 * 障壁監視の初期化処理(超音波センサーの初期化処理)
 */
extern void WMU_pre(void);

/**
 * 障壁監視の閾値を設定する
 */
extern void WMU_set_threshold(int threshold);

/**
 * 障壁監視の閾値を取得する
 * @return int 設定された閾値の値を返す
 */
extern int WMU_get_threshold(void);

/**
 * 障壁監視の状態を示す
 * @return int 閾値より超音波センサーの値が小さい(近い)ときにTRUE(1)，大きい(遠い)ときにFALSE(0)を返す
 */
extern int WMU_isNear(void);

#endif /**__WallMonitorUnit_h__ */
