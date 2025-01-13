/*
 * COPYRIGHT(c)2017 Afrel Co., Ltd.
 * LineDriveController.c
 * ライントレース制御クラス
 *
 * クラス名: LineDriveController(LDC)
 * 属性: なし
 * 操作:
 * 関連: LineMonitorUnit(LMU), MotorUnit(MU), SideMonitorUnit(SMU), common
 */

#include "LineDriveController.h"

//**************************************
//必要に応じて以下にプログラムを記述する
//ここから
//**************************************

/**
 * ライントレース制御
 */
void LDC_do_linetrace(void) {
    // ライン監視の状態を取得（TRUE: 暗い, FALSE: 明るい）
    int is_on_dark = LMU_isOnLine();

    if (!is_on_dark) {
        // 明るいとき（ラインの外）は右に曲がる
        MU_pivotRight();
    } else {
        // 暗いとき（ラインの上）は左に曲がる
        MU_pivotLeft();
    }
}

//**************************************
//ここまで
//**************************************
