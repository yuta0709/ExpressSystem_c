/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * HornUnit.c
 * �N���N�V�����N���X
 *
 * �N���X��: HornUnit(HU)
 * ����: �Ȃ�
 * ����: okSound, errorSound, warnSound, confirSound
 * �֘A: common
 */

#include "HornUnit.h"

/*
 * �N���N�V�����̏���������
 */
void HU_pre(void) {
	ev3_speaker_set_volume(10);
}

/*
 * �N���N�V�����̏I������
 */
void HU_post(void) {
	ev3_speaker_stop();
}

/**
 * ����̉���炷
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
 * �����̉���炷
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
 * �G���[���̉���炷
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
 * �x�����̉���炷
 */
void HU_warnSound(void) {
	ev3_speaker_play_tone(329, 64);
	tslp_tsk(100);
	ev3_speaker_play_tone(492, 512);
	tslp_tsk(100);
}

/**
 * �m�F���̉���炷
 */
void HU_confirmSound(void) {
	ev3_speaker_play_tone(1230, 256);		//��
	tslp_tsk(100);
	ev3_speaker_play_tone(1845, 256);		//��
	tslp_tsk(100);
}
