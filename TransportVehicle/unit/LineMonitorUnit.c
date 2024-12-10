/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LineMonitorUnit.c
 * ライン監視クラス
 *
 * クラス名: LineMonitorUnit(LMU)
 * 属性: threshold
 * 操作: pre, post, set_threshold, get_threshold, isOnLine, get_color
 * 関連: common
 */

#include "LineMonitorUnit.h"

 /** ライン監視に使用するカラーセンサーの接続するポートを指定する(ポート3に接続する場合) */
#define LMU_PORT EV3_PORT_3

/** ライン判別閾値 */
static unsigned int LMU_threshold = 0;

/**
* ライン監視の初期化処理(カラーセンサーの初期化処理)
*/
void LMU_pre(void) {
	ev3_sensor_config(LMU_PORT, COLOR_SENSOR);
}

/**
 * ライン監視の閾値を設定する
 */
void LMU_set_threshold(int threshold) {
	LMU_threshold = threshold;
}

/**
 * ライン監視の閾値を取得する
 * @return int 設定された閾値の値を返す
 */
int LMU_get_threshold(void) {
	return LMU_threshold;
}

/**
 * ライン監視の状態を示す
 * @return int 閾値よりカラーセンサーの値が小さい(暗い)ときにTRUE(1)，大きい(明るい)ときにFALSE(0)を返す
 */
int LMU_isOnLine(void) {
	if (ev3_color_sensor_get_reflect(LMU_PORT) < LMU_threshold) {
		return TRUE;
	}
	return FALSE;
}

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
int LMU_get_color(void) {
	return ev3_color_sensor_get_color(LMU_PORT);
}
