/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LuggageCarrierUnit.c
 * 荷台クラス
 *
 * クラス名: LuggageCarrierUnit(LCU)
 * 属性: なし
 * 操作: isLoaded
 * 関連: common
 */

#include "LuggageCarrierUnit.h"

/** 荷台に使用するタッチセンサーの接続ポートを指定する(ポート2に接続する場合) */
#define LCU_PORT EV3_PORT_2

/*
 * 荷台の初期化処理(タッチセンサーの初期化処理)
 */
void LCU_pre(void) {
	ev3_sensor_config(LCU_PORT, TOUCH_SENSOR);
}

/**
 * 荷台の状態を示す
 * @return int 荷台に荷物が置かれているときはTRUE(1)、置かれていないときはFALSE(0)を返す
 */
int LCU_isLoaded(void) {
	return ev3_touch_sensor_is_pressed(LCU_PORT);
}
