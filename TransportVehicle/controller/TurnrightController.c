/*
 * TurnrightController.c
 * 右回転制御クラス
 *
 * クラス名: TurnrightController(TRC)
 * 属性: なし
 * 操作: do_turnright
 * 関連: MotorUnit(MU), LineMonitorUnit(LMU), TimerUnit(TU), common
 */

#include "TurnrightController.h"


/**
 * 右回転制御
 */
void TRC_do_turnright(void) {
    // その場で右に回転する
    MU_turnRight();
    
    // 一定時間スリープする（1秒）
    TU_start(700);
    while (!TU_isTimeout()) {
        // タイムアウトまで待機
    }
    TU_finish();

    // ライン監視の状態を確認
    if (!LMU_isOnLine()) {
        // 明るいとき（ライン外）は、その場で右に回転
        MU_turnRight();
    } else {
        // 暗いとき（ライン上）は停止
        MU_stop();
    }
} 