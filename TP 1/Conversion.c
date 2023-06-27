//Funciones de conversion Celsius y Fahrenheit

#include <stdio.h>
#include "Conversion.h"

float Celsius(float fahr){
    return (5.0/9.0) * (fahr - 32);
}

float Fahrenheit(float celsius){
    return (celsius * 9.0)/5.0 + 32;
}