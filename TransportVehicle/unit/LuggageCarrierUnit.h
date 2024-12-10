/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LuggageCarrierUnit.c
 * 荷台クラス
 *
 * クラス名: LuggageCarrierUnit(LCU)
 * 属性: なし
 * 操作: isLoaded
 * 関連: common
 */

#ifndef __LuggageCarrierUnit_h__
#define __LuggageCarrierUnit_h__

//com
#include "../com/common.h"

 /*
 * 荷台の初期化処理(タッチセンサーの初期化処理)
 */
void LCU_pre(void);

/**
 * 荷台の状態を示す
 * @return int 荷台に荷物が置かれているときはTRUE(1)、置かれていないときはFALSE(0)を返す
 */
extern int LCU_isLoaded(void);

#endif /**__LuggageCarrierUnit_h__ */
