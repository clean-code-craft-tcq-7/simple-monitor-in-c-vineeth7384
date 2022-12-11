#include <stdio.h>
#include <assert.h>

#define TEMP_LOWER_LIMIT 0
#define TEMP_UPPER_LIMIT 45
#define SOC_LOWER_LIMIT 20
#define SOC_UPPER_LIMIT 80
#define CHARGERATE_UPPER_LIMIT 0.8

int CheckTempRange(float temperature )
{
   int  returnstatus =1;
    if(temperature < TEMP_LOWER_LIMIT || temperature > TEMP_UPPER_LIMIT) 
  {
    printf("Temperature out of range!\n");
    returnstatus = 0;
  }
   return returnstatus;
}
int CheckSocRange(float soc )
{
    int  returnstatus =1;
    if(soc < SOC_LOWER_LIMIT || soc > SOC_UPPER_LIMIT)
  {
    printf("State of Charge out of range!\n");
    returnstatus = 0;
  } 
    return returnstatus;
}
int CheckchargeRate(float chargeRate )
{
    int  returnstatus =1;
    if(chargeRate > CHARGERATE_UPPER_LIMIT)
  {
    printf("Charge Rate out of range!\n");
    returnstatus = 0;
  } 
   return returnstatus;
}


int batteryIsOk(float temperature, float soc, float chargeRate)
{
    int returnstatus = 1;
    
    returnstatus &= CheckTempRange(temperature);
    returnstatus &= CheckSocRange(soc);
    returnstatus &= CheckchargeRate(chargeRate);
    return returnstatus;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
