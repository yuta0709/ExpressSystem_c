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

// 状態変数の定義
enum AC_STATUS cur_state = AC_STATUS_NO;
enum AC_STATUS pre_state = AC_STATUS_NO;

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

    // 初期状態を設定（未定義状態から開始）
    pre_state = AC_STATUS_NO;
    cur_state = AC_STATUS_NO;
    
    // 初期状態へ遷移
    cur_state = AC_STATUS_REQUESTWAIT;

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
    DU_showNumber(cur_state);

    /* 状態に応じた処理の実行 */
    switch (cur_state) {
        case AC_STATUS_NO:
            break;
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
