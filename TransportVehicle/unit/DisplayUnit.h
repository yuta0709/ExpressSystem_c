/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * DisplayUnit.h
 * 状態表示クラス
 *
 * クラス名: DisplayUnit(DU)
 * 属性: なし
 * 操作: pre, post, showString, showNumber, clear
 * 関連: common
 */

#ifndef __DisplayUnit_h__
#define __DisplayUnit_h__

//com
#include "../com/common.h"

//液晶ディスプレイに表示するシステム名設定
//const char target_subsystem_name[] = "CollectionVehicle";

/*
 * 状態表示の初期化処理
 */
extern void DU_pre(void);

/*
 * 状態表示の終了処理
 */
extern void DU_post(void);

/**
 * 液晶ディスプレイに文字を表示する
 *　 @param param 液晶ディスプレイに表示する文字
 */
extern void DU_showString(char *param);

/**
 * 液晶ディスプレイに数字を表示する
 * @param status 液晶ディスプレイに表示する数字
 */
extern void DU_showNumber(int status);

/**
 * 液晶ディスプレイをクリアする
 */
extern void DU_clear(void);

#endif /**__DisplayUnit_h__ */
