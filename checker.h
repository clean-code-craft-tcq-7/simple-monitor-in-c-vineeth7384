#include<stdio.h>
#define TEMP_LOWER_LIMIT 0
#define TEMP_UPPER_LIMIT 45
#define SOC_LOWER_LIMIT 20
#define SOC_UPPER_LIMIT 80
#define CHARGERATE_UPPER_LIMIT 0.8
int batteryIsOk(float temperature, float soc, float chargeRate);
