#ifndef __DeliverController_h__
#define __DeliverController_h__

//com
#include "../com/common.h"
//unit
#include "../controller/LineDriveControllerUnit.h"
#include "../unit/LuggageCarrierUnit.h"
#include "../unit/LineMonitorUnit.h"
#include "../unit/HornUnit.h"
#include "../unit/MotorUnit.h"


extern void AC_pre(void);

/*
 * 行動制御の終了処理
 */
extern void AC_post(void);

/**
 * 行動制御
 */
extern void AC_controllAction(void);