#include <stdio.h>
#include"BMS_Config.h"
#include"BMS_TempValidate.h"

/************************************************************************
 *FUNCTION:    IsTempInRange
 *DESCRIPTION: Function to validate the Temperature range
 *PARAMETER:   temperature,TempUnit
 *RETURNVALUE: int
************************************************************************/

int IsTempInRange(float temperature)
{
  int returnstatus =1;
  temperature = CheckSelectedTempUnit(temperature);
  
  if(temperature < TEMP_LOWER_LIMIT|| temperature > TEMP_UPPER_LIMIT )
  {
    printf("%s",ErrorMessageLookupTable[ErrorMessageLookupTableIndex].TempWarning);
    returnstatus = 0;
  }
  return returnstatus;
}
/************************************************************************
 *FUNCTION:    fahrenheittocelsius
 *DESCRIPTION: Function to convert fahrenheit to celsius
 *PARAMETER:   temperature
 *RETURNVALUE: float
************************************************************************/

float fahrenheittocelsius(float temperature)
{
  float celsius;
  celsius = (temperature - 32) * 5 / 9;
  return celsius;
}

/************************************************************************
 *FUNCTION:    CheckSelectedTempUnit
 *DESCRIPTION: Function to validate the Temperature unit and Convert Tmpr into celsius if unit difference found 
 *PARAMETER:   temperature,TempUnit
 *RETURNVALUE: float
************************************************************************/
float CheckSelectedTempUnit(float temperature)
{
  float ConvertedTemp;
  
  if(TempUnit==0)
  {  
   ConvertedTemp=  temperature;
  }
  else if(TempUnit == 1)
  {
    ConvertedTemp = fahrenheittocelsius(temperature);
  }
  else
  {
   ConvertedTemp=  temperature;  
  }	  

  return ConvertedTemp;
}
