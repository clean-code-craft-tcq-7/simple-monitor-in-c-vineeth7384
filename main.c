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
  //TESTCASE-6
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(!batteryIsOk(50, 40, 0.3));
  //TESTCASE-7
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(!batteryIsOk(40, 90, 0.3));
  //TESTCASE-8
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(!batteryIsOk(40, 70, 0.9));
  //TESTCASE-9
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(batteryIsOk(0, 70, 0.3));
  //TESTCASE-10
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 70, 0.3));
  //TESTCASE-11
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 20, 0.3));
  //TESTCASE-12
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 80, 0.3));
  //TESTCASE-13
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 80, 0));
  //TESTCASE-14
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 80, 0.7));
  //TESTCASE-15
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 1;
  CheckSelectedLanguage();
  assert(!batteryIsOk(45, 80, 0.8));
  //TESTCASE-16
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(!batteryIsOk(50, 40, 0.3));
  //TESTCASE-17
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(!batteryIsOk(40, 90, 0.3));
  //TESTCASE-18
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(!batteryIsOk(40, 70, 0.9));
  //TESTCASE-19
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(batteryIsOk(0, 70, 0.3));
  //TESTCASE-20
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 70, 0.3));
  //TESTCASE-21
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 20, 0.3));
  //TESTCASE-22
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 80, 0.3));
  //TESTCASE-23
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 80, 0));
  //TESTCASE-24
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(batteryIsOk(45, 80, 0.7));
  //TESTCASE-25
  TempUnit = 0;
  ErrorMessageLookupTableIndex= 0;
  CheckSelectedLanguage();
  assert(!batteryIsOk(45, 80, 0.8)); 
  
  return 0;
}
