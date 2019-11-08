//convertTemperatureCtoK
//----------------------
//Print temperature in Kelvin from input read temperature in Celcius
#include <iostream>
main()
{
  const float zeroC(273.15);
  float tempC,tempK;
  std::cout << "Enter temperature in Celcius :" << std::endl;
  std::cin >> tempC;
  tempK = tempC + zeroC;
  std::cout << tempC << " °C is " << tempK << " K" << std::endl;
}