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

void C_LineDrive(void){
    //ラインの監視状態の取得
    line_status = LMU_isOnLine();

    //明るかったら右に曲がる/暗かったら左に曲がる
    if(line_status == 0){
        MU_pivotRight();
    }else{
        MU_pivotLeft();
    }
}





//**************************************
//ここまで
//**************************************
