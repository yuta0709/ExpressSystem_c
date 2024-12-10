/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * WallMonitorUnit.c
 * 障壁監視クラス
 *
 * クラス名: WallMonitorUnit(WMU)
 * 属性: threshold
 * 操作: set_threshold, get_threshold, isNear, pre, post
 * 関連: common
 */

#include "WallMonitorUnit.h"

/** 障壁監視に使用する超音波センサーを接続するポートを指定する(ポート4に接続する場合) */
#define WMU_PORT EV3_PORT_4

/** 障壁距離判別閾値 */
static unsigned int WMU_threshold = 0;

/**
 * 障壁監視の初期化処理(超音波センサーの初期化処理)
 */
void WMU_pre(void) {
	ev3_sensor_config(WMU_PORT, ULTRASONIC_SENSOR);
}

/**
 * 障壁監視の閾値を設定する
 */
void WMU_set_threshold(int threshold) {
	WMU_threshold = threshold;
}

/**
 * 障壁監視の閾値を取得する
 * @return int 設定された閾値の値を返す
 */
int WMU_get_threshold(void) {
	return WMU_threshold;
}

/**
 * 障壁監視の状態を示す
 * @return int 閾値より超音波センサーの値が小さい(近い)ときにTRUE(1)，大きい(遠い)ときにFALSE(0)を返す
 */
int WMU_isNear(void) {
	if (ev3_ultrasonic_sensor_get_distance(WMU_PORT) < WMU_threshold) {
		return TRUE;
	}
	return FALSE;
}
