/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ButtonUnit.h
 * 指示ボタンクラス
 *
 * クラス名: ButtonUnit(BU)
 * 属性: なし
 * 操作: isPushed
 * 関連: common
 */

#ifndef __ButtonUnit_h__
#define __ButtonUnit_h__

//com
#include "../com/common.h"

/*
 * 指示ボタンの初期化処理(タッチセンサーの初期化処理)
 */
void BU_pre(void);

/*
 * 指示ボタンの状態を示す
 * @return int バンパーが押されているときはTRUE(1)、押されていないときはFALSE(0)を返す
 */
extern int BU_isPushed(void);

#endif /**__ButtonUnit_h__ */
