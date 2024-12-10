/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * MotorUnit.c
 * モーター制御クラス
 *
 * クラス名: MotorUnit(MU)
 * 属性: motorForwardSpeed, motorBackwardSpeed
 * 操作: set_forwardSpeed, set_backwardSpeed, forward, backward, turnRight, turnLeft,
 *       pivotRight, pivotLeft, stop, angleturnRight, angleturnLeft
 * 関連: common
 */

#include "MotorUnit.h"

 /** 左右のモーターの接続ポートを指定する(ポートB、Cに接続する場合) */
#define L_MOTOR	EV3_PORT_B
#define R_MOTOR	EV3_PORT_C

/** モーター前進速度 */
static signed int MU_motorForwardSpeed = 0;
/** モーター後退速度 */
static signed int MU_motorBackwardSpeed = 0;

/*
 * モーター制御の初期化処理(左右のモーターの初期化処理)
 */
void MU_pre(void) {
	ev3_motor_config(L_MOTOR, LARGE_MOTOR);
	ev3_motor_config(R_MOTOR, LARGE_MOTOR);

	ev3_motor_reset_counts(L_MOTOR);
	ev3_motor_reset_counts(R_MOTOR);
}

/*
 * モーター制御の終了処理(左右のモーターの終了処理)
 */
void MU_post(void) {
	ev3_motor_stop(L_MOTOR, TRUE);
	ev3_motor_stop(R_MOTOR, TRUE);
}

/**
 * モーター前進速度を設定する
 */
void MU_set_forwardSpeed(int forwardSpeed) {
	if (forwardSpeed < 0) {
		forwardSpeed = forwardSpeed * (-1);
	}
	MU_motorForwardSpeed = forwardSpeed;
}

/**
 * モーター後退速度を設定する
 */
void MU_set_backwardSpeed(int backwardSpeed) {
	if (backwardSpeed > 0) {
		backwardSpeed = backwardSpeed * (-1);
	}
	MU_motorBackwardSpeed = backwardSpeed;
}

/**
 * 前進する
 */
void MU_forward(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorForwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorForwardSpeed);
}

/**
 * 後退する
 */
void MU_backward(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorBackwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorBackwardSpeed);
}

/**
 * その場で右に回転する
 */
void MU_turnRight(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorForwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorBackwardSpeed);
}

/**
 * その場で左に回転する
 */
void MU_turnLeft(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorBackwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorForwardSpeed);
}

/**
 * 右に曲がる
 */
void MU_pivotRight(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorForwardSpeed);
	ev3_motor_set_power(R_MOTOR, 0);
}

/**
 * 左に曲がる
 */
void MU_pivotLeft(void) {
	ev3_motor_set_power(L_MOTOR, 0);
	ev3_motor_set_power(R_MOTOR, MU_motorForwardSpeed);
}

/**
 * 停止する
 */
void MU_stop(void) {
	ev3_motor_stop(L_MOTOR, TRUE);
	ev3_motor_stop(R_MOTOR, TRUE);
}

/**
 * その場で指定した角度だけ右に回転する
 * @param angle 回転させたいロボットの回転角度(度)
 */
void MU_angleturnRight(int angle) {
	double setangle;
	setangle = angle * 1.8181;

	ev3_motor_reset_counts(L_MOTOR);

	ev3_motor_set_power(L_MOTOR, MU_motorForwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorBackwardSpeed);

	while (ev3_motor_get_counts(L_MOTOR) < setangle) {}

	ev3_motor_stop(L_MOTOR, TRUE);
	ev3_motor_stop(R_MOTOR, TRUE);
}

/**
 * その場で指定した角度だけ左に回転する
 * @param angle 回転させたいロボットの回転角度(度)
 */
void MU_angleturnLeft(int angle) {
	double setangle;
	setangle = angle * 1.8181;

	ev3_motor_reset_counts(R_MOTOR);

	ev3_motor_set_power(L_MOTOR, MU_motorBackwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorForwardSpeed);

	while (ev3_motor_get_counts(R_MOTOR) < setangle) {}

	ev3_motor_stop(L_MOTOR, TRUE);
	ev3_motor_stop(R_MOTOR, TRUE);
}
