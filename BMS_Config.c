#include <stdio.h>
#include"BMS_Config.h"

int ErrorMessageLookupTableIndex = 0;
int TempUnit= 0;
/************************************************************************
 *FUNCTION:
 *DESCRIPTION: Database for Warnings in Different languages.
 *PARAMETER:
 *RETURNVALUE:
************************************************************************/

const ErrorMessage ErrorMessageLookupTable[] =
{
    {"ENGLISH","Temperature out of range!\n","Charge Rate out of range!\n","State of Charge out of range!\n"},
    {"GERMAN","Temperatur außerhalb des Bereichs!\n","Laderate außerhalb des Bereichs!\n","Ladezustand außerhalb des Bereichs!\n"},

};

int MaximumLanguageCount = (sizeof(ErrorMessageLookupTable)/sizeof(ErrorMessageLookupTable[0]));

/************************************************************************
 *FUNCTION:    CheckSelectedLanguage
 *DESCRIPTION: Function to validate the Selected Language
 *PARAMETER:   void
 *RETURNVALUE: void
************************************************************************/
void CheckSelectedLanguage(void)
{
  if(ErrorMessageLookupTableIndex >= MaximumLanguageCount)
  {
     ErrorMessageLookupTableIndex =0 ;
     printf("Selecetd Langauage is not available! switch to default language English\n" );
  }
}




