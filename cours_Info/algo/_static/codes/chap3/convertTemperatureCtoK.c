//convertTemperatureCtoK
//----------------------
//Print temperature in Kelvin from input read temperature in Celcius
#include <stdio.h>
main()
{
  const float zeroC(273.15);
  float tempC,tempK;
  printf("Enter temperature in Celcius :\n");
  scanf(&tempC);
  tempK = tempC + zeroC;
  printf("%f °C is %f K\n", tempC, tempK);
}