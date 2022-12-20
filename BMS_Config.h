#ifndef BMS_CONFIGH_H
#define BMS_CONFIGH_H

#include<stdio.h>

#define TEMP_LOWER_LIMIT 0
#define TEMP_UPPER_LIMIT 45
#define SOC_LOWER_LIMIT 20
#define SOC_UPPER_LIMIT 80
#define CHARGERATE_UPPER_LIMIT 0.8

typedef struct
{
  char*Language;
  char*TempWarning;
  char*ChargeRateWarning;
  char*SoCWarning;
}Warning;

extern const Warning WarningLookupTable[];
void CheckSelectedLanguage(void);
extern int LookupTableWarningIndex;
extern int TempUnit;
#endif