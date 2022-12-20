#include <stdio.h>
#include"BMS_Config.h"

/************************************************************************
 *FUNCTION:    IsChargeRateInRange
 *DESCRIPTION: Function to validate the ChargeRate range
 *PARAMETER:   chargeRate
 *RETURNVALUE: int
************************************************************************/

int IsChargeRateInRange(float chargeRate)
{
  int returnstatus =1;
  if(chargeRate > CHARGERATE_UPPER_LIMIT)
  {
    printf("%s",WarningLookupTable[LookupTableWarningIndex].ChargeRateWarning);
    returnstatus = 0;
  }
  return returnstatus;
}