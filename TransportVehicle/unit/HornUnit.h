/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * HornUnit.h
 * クラクションクラス
 *
 * クラス名: HornUnit(HU)
 * 属性: なし
 * 操作: okSound, errorSound, warnSound, confirSound
 * 関連: common
 */

#ifndef __HornUnit_h__
#define __HornUnit_h__

//com
#include "../com/common.h"

/*
 * クラクションの初期化処理
 */
extern void HU_pre(void);

/*
 * クラクションの終了処理
 */
extern void HU_post(void);

/**
 * 正常の音を鳴らす
 */
extern void HU_okSound(void);

/**
 * 到着の音を鳴らす
 */
extern void HU_arrivalSound(void);

/**
 * エラー時の音を鳴らす
 */
extern void HU_errorSound(void);

/**
 * 警告時の音を鳴らす
 */
extern void HU_warnSound(void);

/**
 * 確認時の音を鳴らす
 */
extern void HU_confirmSound(void);


#endif /**__HornUnit_h__ */
