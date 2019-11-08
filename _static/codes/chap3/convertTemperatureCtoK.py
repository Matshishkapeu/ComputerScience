#convertTemperatureCtoK
#----------------------
#Print temperature in Kelvin from input read temperature in Celcius
# -*-coding:utf8 -*
zeroC = 273.15
tempC = input("Enter temperature in Celcius :")
tempC = float(tempC)
tempK = tempC + zeroC
print(tempC, " °C is ", tempK, " K")