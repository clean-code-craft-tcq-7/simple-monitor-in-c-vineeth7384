#ifndef BMS_H
#define BMS_H

#include<stdio.h>
#include"BMS_TempValidate.h"
#include"BMS_ChargeRateValidate.h"
#include"BMS_SoCValidate.h"
#include"BMS_Config.h"

int batteryIsOk(float temperature, float soc, float chargeRate);

#endif