/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * app.c
 *
 * �N���X��:
 * ����:
 * ����:
 * �֘A: ev3api, app
 */

#include "ev3api.h"
#include "app.h"

#if defined(BUILD_MODULE)
#include "module_cfg.h"
#else
#include "kernel_cfg.h"
#endif

void main_task(intptr_t unused)
{
	//����������
	AC_pre();

	while (TRUE) {
		AC_controllAction();
	}

	//���^�X�N�̏I��
	ext_tsk();
}
