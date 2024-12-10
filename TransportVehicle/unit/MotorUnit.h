/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * MotorUnit.h
 * ���[�^�[����N���X
 *
 * �N���X��: MotorUnit(MU)
 * ����: motorForwardSpeed, motorBackwardSpeed
 * ����: set_forwardSpeed, set_backwardSpeed, forward, backward, turnRight, turnLeft,
 *       pivotRight, pivotLeft, stop, angleturnRight, angleturnLeft
 * �֘A: common
 */

#ifndef __MotorUnit_h__
#define __MotorUnit_h__

//com
#include "../com/common.h"

/*
 * ���[�^�[����̏���������(���E�̃��[�^�[�̏���������)
 */
void MU_pre(void);

/*
 * ���[�^�[����̏I������(���E�̃��[�^�[�̏I������)
 */
void MU_post(void);

/**
 * ���[�^�[�O�i���x��ݒ肷��
 */
extern void MU_set_forwardSpeed(int forwardSpeed);

/**
 * ���[�^�[��ޑ��x��ݒ肷��
 */
extern void MU_set_backwardSpeed(int backwardSpeed);

/**
 * �O�i����
 */
extern void MU_forward(void);

/**
 * ��ނ���
 */
extern void MU_backward(void);

/**
 * ���̏�ŉE�ɉ�]����
 */
extern void MU_turnRight(void);

/**
 * ���̏�ō��ɉ�]����
 */
extern void MU_turnLeft(void);

/**
 * �E�ɋȂ���
 */
extern void MU_pivotRight(void);

/**
 * ���ɋȂ���
 */
extern void MU_pivotLeft(void);

/**
 * ��~����
 */
extern void MU_stop(void);

/**
 * ���̏�Ŏw�肵���p�x�����E�ɉ�]����
 * @param angle ��]�����������{�b�g�̉�]�p�x(�x)
 */
extern void MU_angleturnRight(int angle);

/**
 * ���̏�Ŏw�肵���p�x�������ɉ�]����
 * @param angle ��]�����������{�b�g�̉�]�p�x(�x)
 */
extern void MU_angleturnLeft(int angle);


#endif /**__MotorUnit_h__ */
