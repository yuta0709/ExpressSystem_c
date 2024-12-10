/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * MotorUnit.c
 * ���[�^�[����N���X
 *
 * �N���X��: MotorUnit(MU)
 * ����: motorForwardSpeed, motorBackwardSpeed
 * ����: set_forwardSpeed, set_backwardSpeed, forward, backward, turnRight, turnLeft,
 *       pivotRight, pivotLeft, stop, angleturnRight, angleturnLeft
 * �֘A: common
 */

#include "MotorUnit.h"

 /** ���E�̃��[�^�[�̐ڑ��|�[�g���w�肷��(�|�[�gB�AC�ɐڑ�����ꍇ) */
#define L_MOTOR	EV3_PORT_B
#define R_MOTOR	EV3_PORT_C

/** ���[�^�[�O�i���x */
static signed int MU_motorForwardSpeed = 0;
/** ���[�^�[��ޑ��x */
static signed int MU_motorBackwardSpeed = 0;

/*
 * ���[�^�[����̏���������(���E�̃��[�^�[�̏���������)
 */
void MU_pre(void) {
	ev3_motor_config(L_MOTOR, LARGE_MOTOR);
	ev3_motor_config(R_MOTOR, LARGE_MOTOR);

	ev3_motor_reset_counts(L_MOTOR);
	ev3_motor_reset_counts(R_MOTOR);
}

/*
 * ���[�^�[����̏I������(���E�̃��[�^�[�̏I������)
 */
void MU_post(void) {
	ev3_motor_stop(L_MOTOR, TRUE);
	ev3_motor_stop(R_MOTOR, TRUE);
}

/**
 * ���[�^�[�O�i���x��ݒ肷��
 */
void MU_set_forwardSpeed(int forwardSpeed) {
	if (forwardSpeed < 0) {
		forwardSpeed = forwardSpeed * (-1);
	}
	MU_motorForwardSpeed = forwardSpeed;
}

/**
 * ���[�^�[��ޑ��x��ݒ肷��
 */
void MU_set_backwardSpeed(int backwardSpeed) {
	if (backwardSpeed > 0) {
		backwardSpeed = backwardSpeed * (-1);
	}
	MU_motorBackwardSpeed = backwardSpeed;
}

/**
 * �O�i����
 */
void MU_forward(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorForwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorForwardSpeed);
}

/**
 * ��ނ���
 */
void MU_backward(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorBackwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorBackwardSpeed);
}

/**
 * ���̏�ŉE�ɉ�]����
 */
void MU_turnRight(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorForwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorBackwardSpeed);
}

/**
 * ���̏�ō��ɉ�]����
 */
void MU_turnLeft(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorBackwardSpeed);
	ev3_motor_set_power(R_MOTOR, MU_motorForwardSpeed);
}

/**
 * �E�ɋȂ���
 */
void MU_pivotRight(void) {
	ev3_motor_set_power(L_MOTOR, MU_motorForwardSpeed);
	ev3_motor_set_power(R_MOTOR, 0);
}

/**
 * ���ɋȂ���
 */
void MU_pivotLeft(void) {
	ev3_motor_set_power(L_MOTOR, 0);
	ev3_motor_set_power(R_MOTOR, MU_motorForwardSpeed);
}

/**
 * ��~����
 */
void MU_stop(void) {
	ev3_motor_stop(L_MOTOR, TRUE);
	ev3_motor_stop(R_MOTOR, TRUE);
}

/**
 * ���̏�Ŏw�肵���p�x�����E�ɉ�]����
 * @param angle ��]�����������{�b�g�̉�]�p�x(�x)
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
 * ���̏�Ŏw�肵���p�x�������ɉ�]����
 * @param angle ��]�����������{�b�g�̉�]�p�x(�x)
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
