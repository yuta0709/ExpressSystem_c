/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ButtonUnit.c
 * 指示ボタンクラス
 *
 * クラス名: ButtonUnit(BU)
 * 属性: なし
 * 操作: isPushed
 * 関連: common
 */

#include "ButtonUnit.h"

/* 指示ボタンに使用するタッチセンサーの接続ポートを指定する(ポート1に接続する場合) */
#define BU_PORT EV3_PORT_1

/*
 * 指示ボタンの初期化処理(タッチセンサーの初期化処理)
 */
void BU_pre(void) {
	ev3_sensor_config(BU_PORT, TOUCH_SENSOR);
}

/**
 * 指示ボタンの状態を示す
 * @return int 指示ボタンが押されているときはTRUE(1)、押されていないときはFALSE(0)を返す
 */
int BU_isPushed(void) {
	return ev3_touch_sensor_is_pressed(BU_PORT);
}
