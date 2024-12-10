/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * app.c
 *
 * クラス名:
 * 属性:
 * 操作:
 * 関連: ev3api, app
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
	//初期化処理
	AC_pre();

	while (TRUE) {
		AC_controllAction();
	}

	//自タスクの終了
	ext_tsk();
}
