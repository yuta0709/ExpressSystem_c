/*
 * CollectmoveController.c
 * 収集移動状態の制御クラス
 *
 * クラス名: CollectmoveController(CMC)
 * 属性: なし
 * 操作: action
 * 関連: ActionController(AC), LineDriveController(LDC), WallMonitorUnit(WMU), 
 *       MotorUnit(MU), HornUnit(HU), common
 */

#include "CollectmoveController.h"

// 内部関数のプロトタイプ宣言
static void CMC_entry(void);
static void CMC_do(void);
static void CMC_exit(void);

/**
 * 収集移動状態の制御
 */
void CMC_action(void) {
    // entry処理（状態が変化した時のみ実行）
    if (pre_state != AC_STATUS_COLLECTMOVE) {
        CMC_entry();
    }

    // do処理（毎回実行）
    CMC_do();

    // 壁を検知したら状態遷移
    if (WMU_isNear()) {
        // モーターを停止
        MU_stop();
        // 到着音を鳴らす
        HU_arrivalSound();
        // 状態を荷物積載待機に遷移
        pre_state = cur_state;
        cur_state = AC_STATUS_CARRYWAIT;
    }

    // 状態が変化した場合のexit処理
    if (pre_state != cur_state) {
        CMC_exit();
    }
}

/**
 * 収集移動状態のentry処理
 */
static void CMC_entry(void) {
    // 特に初期化処理なし
}

/**
 * 収集移動状態のdo処理
 */
static void CMC_do(void) {
    // ライントレース制御を実行
    LDC_do_linetrace();
}

/**
 * 収集移動状態のexit処理
 */
static void CMC_exit(void) {
    // 特に終了処理なし
} 