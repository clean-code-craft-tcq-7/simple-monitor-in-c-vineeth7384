#include <stdio.h>
#include"BMS_Config.h"

/************************************************************************
 *FUNCTION:    IsSocInRange
 *DESCRIPTION: Function to validate the Soc range
 *PARAMETER:   soc
 *RETURNVALUE: int
************************************************************************/

int IsSocInRange(float soc )
{
  int returnstatus =1;
  if(soc < SOC_LOWER_LIMIT || soc > SOC_UPPER_LIMIT)
  {
    printf("%s",ErrorMessageLookupTable[ErrorMessageLookupTableIndex].SoCWarning);
    returnstatus = 0;
  }
  return returnstatus;
}
