#include <stdio.h>
#include <assert.h>
#include"BMS.h"

/************************************************************************
 *FUNCTION:    batteryIsOk
 *DESCRIPTION: Function to validate the BMS
 *PARAMETER:   temperature,soc & chargeRate
 *RETURNVALUE: int
************************************************************************/
int batteryIsOk(float temperature, float soc, float chargeRate)
{
  int returnstatus = 1;
  returnstatus = (IsTempInRange(temperature)&& IsSocInRange(soc)&& IsChargeRateInRange(chargeRate));
  return returnstatus;
}

