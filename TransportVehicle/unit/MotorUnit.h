/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * MotorUnit.h
 * モーター制御クラス
 *
 * クラス名: MotorUnit(MU)
 * 属性: motorForwardSpeed, motorBackwardSpeed
 * 操作: set_forwardSpeed, set_backwardSpeed, forward, backward, turnRight, turnLeft,
 *       pivotRight, pivotLeft, stop, angleturnRight, angleturnLeft
 * 関連: common
 */

#ifndef __MotorUnit_h__
#define __MotorUnit_h__

//com
#include "../com/common.h"

/*
 * モーター制御の初期化処理(左右のモーターの初期化処理)
 */
void MU_pre(void);

/*
 * モーター制御の終了処理(左右のモーターの終了処理)
 */
void MU_post(void);

/**
 * モーター前進速度を設定する
 */
extern void MU_set_forwardSpeed(int forwardSpeed);

/**
 * モーター後退速度を設定する
 */
extern void MU_set_backwardSpeed(int backwardSpeed);

/**
 * 前進する
 */
extern void MU_forward(void);

/**
 * 後退する
 */
extern void MU_backward(void);

/**
 * その場で右に回転する
 */
extern void MU_turnRight(void);

/**
 * その場で左に回転する
 */
extern void MU_turnLeft(void);

/**
 * 右に曲がる
 */
extern void MU_pivotRight(void);

/**
 * 左に曲がる
 */
extern void MU_pivotLeft(void);

/**
 * 停止する
 */
extern void MU_stop(void);

/**
 * その場で指定した角度だけ右に回転する
 * @param angle 回転させたいロボットの回転角度(度)
 */
extern void MU_angleturnRight(int angle);

/**
 * その場で指定した角度だけ左に回転する
 * @param angle 回転させたいロボットの回転角度(度)
 */
extern void MU_angleturnLeft(int angle);


#endif /**__MotorUnit_h__ */
