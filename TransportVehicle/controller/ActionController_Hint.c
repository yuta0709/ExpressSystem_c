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
	AC_STATUS_REQUESTWAIT,			// status 0		収集指示待機
	//他の状態も記述
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


	/* 現在のステータスを表示 */
	DU_showNumber(AC_currentStatus);　//AC_currentStatusは状態を表す変数（AC_STATUS)

	switch (AC_currentStatus) {
		case AC_STATUS_REQUESTWAIT:
			AC_request_wait();
			break;
	//他の状態も記述

	}
}

//**************************************
//ここまで
//**************************************
}
