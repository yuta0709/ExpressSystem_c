/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * DisplayUnit.h
 * ��ԕ\���N���X
 *
 * �N���X��: DisplayUnit(DU)
 * ����: �Ȃ�
 * ����: pre, post, showString, showNumber, clear
 * �֘A: common
 */

#ifndef __DisplayUnit_h__
#define __DisplayUnit_h__

//com
#include "../com/common.h"

//�t���f�B�X�v���C�ɕ\������V�X�e�����ݒ�
//const char target_subsystem_name[] = "CollectionVehicle";

/*
 * ��ԕ\���̏���������
 */
extern void DU_pre(void);

/*
 * ��ԕ\���̏I������
 */
extern void DU_post(void);

/**
 * �t���f�B�X�v���C�ɕ�����\������
 *�@ @param param �t���f�B�X�v���C�ɕ\�����镶��
 */
extern void DU_showString(char *param);

/**
 * �t���f�B�X�v���C�ɐ�����\������
 * @param status �t���f�B�X�v���C�ɕ\�����鐔��
 */
extern void DU_showNumber(int status);

/**
 * �t���f�B�X�v���C���N���A����
 */
extern void DU_clear(void);

#endif /**__DisplayUnit_h__ */
