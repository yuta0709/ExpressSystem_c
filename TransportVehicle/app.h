/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * app.h
 *
 * 関連: target_test.h
 */


#ifndef __app_h__
#define __app_h__

#include "target_test.h"
#include "./controller/ActionController.h"

#ifndef STACK_SIZE
#define	STACK_SIZE 4096 /* タスクのスタックサイズ */
#endif /* STACK_SIZE */

/*
 *  関数のプロトタイプ宣言
 */
#ifndef TOPPERS_MACRO_ONLY
extern void	main_task(intptr_t exinf);
#endif /* TOPPERS_MACRO_ONLY */


#endif /* __app_h__ */
