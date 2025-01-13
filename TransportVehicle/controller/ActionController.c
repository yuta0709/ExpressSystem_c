/*
 * ActionController.c
 * 行動制御クラス
 *
 * クラス名: ActionController(AC)
 * 属性: なし
 * 操作: pre, post, controllAction
 * 関連: LineDriveController(LDC), DeliveryController(DLC), LuggageCarrierUnit(LCU),
 *       BumperUnit(BU), DisplayUnit(DU), WallMonitorUnit(WMU), HornUnit(HU), TimerUnit(TU),
 *       common
 */

#include "ActionController.h"
#include "RequestwaitController.h"
#include "CollectmoveController.h"
#include "CarrywaitController.h"
#include "CarryremindController.h"
#include "CollectturnController.h"
#include "DeliveryController.h"
#include "DropbuggageController.h"
#include "UnloadwaitController.h"

// 状態変数の定義
enum AC_STATUS cur_state = AC_STATUS_NO;
enum AC_STATUS pre_state = AC_STATUS_NO;

/**
 * 行動制御の初期化処理
 */
void AC_pre(void) {
    // 初期状態を設定（未定義状態から開始）
    pre_state = AC_STATUS_NO;
    cur_state = AC_STATUS_NO;
    
    // 初期状態へ遷移
    cur_state = AC_STATUS_REQUESTWAIT;
}

/**
 * 行動制御の終了処理
 */
void AC_post(void) {
    // 必要に応じて終了処理を実装
}

/**
 * 行動制御
 */
void AC_controllAction(void) {
    /* 現在のステータスを表示 */
    DU_showNumber(cur_state);

    /* 状態に応じた処理の実行 */
    switch (cur_state) {
        case AC_STATUS_NO:
            break;
        case AC_STATUS_REQUESTWAIT:
            RWC_action();
            break;
        case AC_STATUS_COLLECTMOVE:
            CMC_action();
            break;
        case AC_STATUS_CARRYWAIT:
            CWC_action();
            break;
        case AC_STATUS_CARRYREMIND:
            CRC_action();
            break;
        case AC_STATUS_COLLECTTURN:
            CTC_action();
            break;
        case AC_STATUS_DELIVERY:
            DLC_action();
            break;
        case AC_STATUS_DROPBUGGAGE:
            DBC_action();
            break;
        case AC_STATUS_UNLOADWAIT:
            UWC_action();
            break;
        case AC_STATUS_UNLOADREMIND:
            break;
        case AC_STATUS_DELIVERYTURN:
            break;
        case AC_STATUS_RETURN:
            break;
    }
}
