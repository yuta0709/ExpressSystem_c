#include "DeriverTurnController.h"

void C_DeriverTurn(void){
    //その場で右に回転
    MU_turnRight();

    //一定時間スリープ
    sleep(100)

    //ラインの状態を監視して暗くなるまでループ
    while(LMU_isOnLine() == 0){
        MU_trunLeft();
    }
    MU_stop();
}