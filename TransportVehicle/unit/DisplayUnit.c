/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * DisplayUnit.c
 * 状態表示クラス
 *
 * クラス名: DisplayUnit(DU)
 * 属性: なし
 * 操作: showString, showNumber, clear
 * 関連: common
 */

#include "DisplayUnit.h"

static lcdfont_t font;
static int32_t fontw, fonth;

/*
 * 状態表示の初期化処理
 */
void DU_pre(void) {
	font = EV3_FONT_MEDIUM;
	ev3_lcd_set_font(font);
	ev3_font_get_size(font, &fontw, &fonth);
}

/*
 * 状態表示の終了処理
 */
void DU_post(void) {
	DU_clear();
}


/*
 * 液晶ディスプレイに文字を表示する
 * @param param 液晶ディスプレイに表示する文字
 */
void DU_showString(char *param) {
	ev3_lcd_draw_string(param, 3, fonth * 2);
}

/*
 * 液晶ディスプレイに数字を表示する
 * @param status 液晶ディスプレイに表示する数字
 */
void DU_showNumber(int status) {
	char str[100];
	sprintf(str, "%d", status);
	ev3_lcd_draw_string(str, 3, fonth * 3);
}

/*
 * 液晶ディスプレイをクリアする（白色の矩形で塗りつぶす）
 */
void DU_clear(void) {
	ev3_lcd_fill_rect(0, 0, EV3_LCD_WIDTH, EV3_LCD_HEIGHT, EV3_LCD_WHITE);
}
