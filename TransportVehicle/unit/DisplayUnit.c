/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * DisplayUnit.c
 * ��ԕ\���N���X
 *
 * �N���X��: DisplayUnit(DU)
 * ����: �Ȃ�
 * ����: showString, showNumber, clear
 * �֘A: common
 */

#include "DisplayUnit.h"

static lcdfont_t font;
static int32_t fontw, fonth;

/*
 * ��ԕ\���̏���������
 */
void DU_pre(void) {
	font = EV3_FONT_MEDIUM;
	ev3_lcd_set_font(font);
	ev3_font_get_size(font, &fontw, &fonth);
}

/*
 * ��ԕ\���̏I������
 */
void DU_post(void) {
	DU_clear();
}


/*
 * �t���f�B�X�v���C�ɕ�����\������
 * @param param �t���f�B�X�v���C�ɕ\�����镶��
 */
void DU_showString(char *param) {
	ev3_lcd_draw_string(param, 3, fonth * 2);
}

/*
 * �t���f�B�X�v���C�ɐ�����\������
 * @param status �t���f�B�X�v���C�ɕ\�����鐔��
 */
void DU_showNumber(int status) {
	char str[100];
	sprintf(str, "%d", status);
	ev3_lcd_draw_string(str, 3, fonth * 3);
}

/*
 * �t���f�B�X�v���C���N���A����i���F�̋�`�œh��Ԃ��j
 */
void DU_clear(void) {
	ev3_lcd_fill_rect(0, 0, EV3_LCD_WIDTH, EV3_LCD_HEIGHT, EV3_LCD_WHITE);
}
