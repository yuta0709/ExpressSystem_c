/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * HornUnit.h
 * �N���N�V�����N���X
 *
 * �N���X��: HornUnit(HU)
 * ����: �Ȃ�
 * ����: okSound, errorSound, warnSound, confirSound
 * �֘A: common
 */

#ifndef __HornUnit_h__
#define __HornUnit_h__

//com
#include "../com/common.h"

/*
 * �N���N�V�����̏���������
 */
extern void HU_pre(void);

/*
 * �N���N�V�����̏I������
 */
extern void HU_post(void);

/**
 * ����̉���炷
 */
extern void HU_okSound(void);

/**
 * �����̉���炷
 */
extern void HU_arrivalSound(void);

/**
 * �G���[���̉���炷
 */
extern void HU_errorSound(void);

/**
 * �x�����̉���炷
 */
extern void HU_warnSound(void);

/**
 * �m�F���̉���炷
 */
extern void HU_confirmSound(void);


#endif /**__HornUnit_h__ */
