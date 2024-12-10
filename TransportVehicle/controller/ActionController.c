/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * ActionController.c
 * 行動制御クラス
 *
 * クラス名: ActionController(AC)
 * 属性:
 * 操作: 
 * 関連: LineDriveController(LDC), DeliveryController(DU), LuggageCarrierUnit(LCU),
 *       BumperUnit(BU), DisplayUnit(DU), WallMonitorUnit(WMU), HornUnit(HU), TimerUnit(TU),
 *       common
 */

#include "ActionController.h"

//**************************************
//必要に応じて以下にプログラムを記述する
//ここから
//**************************************

enum AC_STATUS {
    AC_STATUS_REQUESTWAIT,         
    AC_STATUS_COLLECTMOVE,
    AC_STATUS_CARRYWAIT,
    AC_STATUS_CARRYREMIND,
    AC_STATUS_COLLECTTURN,
    AC_STATUS_DERIVER,
    AC_STATUS_DROPBUGGAGE,
    AC_STATUS_UNLOADWAIT,
    AC_STATUS_UNLOADREMIND,
    AC_STATUS_DERIVERTURN,
    AC_STATUS_RETURN,
};



//**************************************
//ここまで
//**************************************

/**
 * 行動制御の初期化処理
 */
void AC_pre(void) {

//**************************************
//必要に応じて以下にプログラムを記述する
//ここから
//**************************************





//**************************************
//ここまで
//**************************************

}

/**
 * 行動制御の終了処理
 */
void AC_post(void) {

//**************************************
//必要に応じて以下にプログラムを記述する
//ここから
//**************************************





//**************************************
//ここまで
//**************************************

}

/**
 * 行動制御
 */
void AC_controllAction(void) {

//**************************************
//必要に応じて以下にプログラムを記述する
//ここから
//**************************************





//**************************************
//ここまで
//**************************************
}
