/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * app.h
 *
 * �֘A: target_test.h
 */


#ifndef __app_h__
#define __app_h__

#include "target_test.h"
#include "./controller/ActionController.h"

#ifndef STACK_SIZE
#define	STACK_SIZE 4096 /* �^�X�N�̃X�^�b�N�T�C�Y */
#endif /* STACK_SIZE */

/*
 *  �֐��̃v���g�^�C�v�錾
 */
#ifndef TOPPERS_MACRO_ONLY
extern void	main_task(intptr_t exinf);
#endif /* TOPPERS_MACRO_ONLY */


#endif /* __app_h__ */
