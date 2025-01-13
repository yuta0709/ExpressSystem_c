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

// 現在の状態を保持する変数
static enum AC_STATUS AC_currentStatus;

// 状態を変更するための関数
void AC_changeStatus(enum AC_STATUS newStatus) {
    AC_currentStatus = newStatus;
}

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

    // 初期状態を設定
    AC_currentStatus = AC_STATUS_REQUESTWAIT;

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

    // 必要に応じて終了処理を実装

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
    DU_showNumber(AC_currentStatus);

    /* 状態に応じた処理の実行 */
    switch (AC_currentStatus) {
        case AC_STATUS_REQUESTWAIT:
            break;
        case AC_STATUS_COLLECTMOVE:
            break;
        case AC_STATUS_CARRYWAIT:
            break;
        case AC_STATUS_CARRYREMIND:
            break;
        case AC_STATUS_COLLECTTURN:
            break;
        case AC_STATUS_DERIVER:
            break;
        case AC_STATUS_DROPBUGGAGE:
            break;
        case AC_STATUS_UNLOADWAIT:
            break;
        case AC_STATUS_UNLOADREMIND:
            break;
        case AC_STATUS_DERIVERTURN:
            break;
        case AC_STATUS_RETURN:
            break;
    }

//**************************************
//ここまで
//**************************************
}
