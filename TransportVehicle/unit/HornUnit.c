/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * HornUnit.c
 * クラクションクラス
 *
 * クラス名: HornUnit(HU)
 * 属性: なし
 * 操作: okSound, errorSound, warnSound, confirSound
 * 関連: common
 */

#include "HornUnit.h"

/*
 * クラクションの初期化処理
 */
void HU_pre(void) {
	ev3_speaker_set_volume(10);
}

/*
 * クラクションの終了処理
 */
void HU_post(void) {
	ev3_speaker_stop();
}

/**
 * 正常の音を鳴らす
 */
void HU_okSound(void) {
	ev3_speaker_play_tone(440, 512);
	tslp_tsk(100);
	ev3_speaker_play_tone(369, 256);
	tslp_tsk(100);
	ev3_speaker_play_tone(880, 512);
	tslp_tsk(100);
}

/**
 * 到着の音を鳴らす
 */
void HU_arrivalSound(void) {
	ev3_speaker_play_tone(277, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(329, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(554, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(880, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(492, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(658, 64);
	tslp_tsk(100);
}

/**
 * エラー時の音を鳴らす
 */
void HU_errorSound(void) {
	ev3_speaker_play_tone(293, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(293, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(293, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(273, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(329, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(293, 512);
	tslp_tsk(100);
}

/**
 * 警告時の音を鳴らす
 */
void HU_warnSound(void) {
	ev3_speaker_play_tone(329, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(492, 512);
	tslp_tsk(100);
}

/**
 * 確認時の音を鳴らす
 */
void HU_confirmSound(void) {
	ev3_speaker_play_tone(1230, 256);		//レ
	tslp_tsk(100);
	ev3_speaker_play_tone(1845, 256);		//ラ
	tslp_tsk(100);
}
