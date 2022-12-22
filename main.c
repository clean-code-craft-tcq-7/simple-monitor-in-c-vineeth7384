#include <stdio.h>
#include <assert.h>
#include"BMS.h"

int main()
{
  printf("Available Temperature Units \n 0: Celsius\n 1: Fahrenheit\n Default:Celsius\n");
  //printf("Please Enter the Temperature Units corresponding Number:\n ");
  //scanf("%d",&TempUnit);
  TempUnit = 0;
  printf("AVailable Languages for showing the warnings\n 0: ENGLISH\n 1: GERMAN\n Default:ENGLISH\n");
  //printf("Please Enter the language corresponding Number:\n ");
  //scanf("%d",&LookupTableWarningIndex);
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
//TESTCASE-2
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(!batteryIsOk(50, 40, 0.3));
 //TESTCASE-3 
  TempUnit = 1;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(batteryIsOk(104, 70, 0.7));
  assert(batteryIsOk(104, 40, 0.3)); 
  //TESTCASE-4 
  TempUnit = 1;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(!batteryIsOk(104, 80, 0.9));
  //TESTCASE-5 
  TempUnit = 1;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(!batteryIsOk(104, 80, 0.9));
  
  return 0;
}
