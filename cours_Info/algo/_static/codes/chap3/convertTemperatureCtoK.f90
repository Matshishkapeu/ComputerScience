!convertTemperatureCtoK
!----------------------
!Print temperature in Kelvin from input read temperature in Celcius
PROGRAM convertTemperatureCtoK
  IMPLICIT NONE
  REAL, PARAMETER :: zeroC = 273.15d0
  REAL :: tempC, tempK
  PRINT*, "Enter temperature in Celcius :"
  READ*, tempC
  tempK = tempC + zeroC
  PRINT*, tempC, " °C is ", tempK, " K"
END PROGRAM convertTemperatureCtoK