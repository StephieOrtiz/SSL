#include "Conversion.h"
#include <stdio.h>

int main(void){
    const int STEP = 20;
    const int LOWER = 0 ;
    const int UPPER = 300;
    printf("\n----Tabla de Fahrenheit a Celsius----");
    printf("\nFahrenheit\tCelsius");
    for (float fahr = LOWER; fahr <= UPPER; fahr += STEP){
        printf("\n%10.0f\t%7.1f", fahr, Celsius(fahr));
    }
    printf("\n\n----Tabla de Celsius a Fahrenheit----");
    printf("\nCelsius\t\tFahrenheit");
    for (float celsius = LOWER; celsius <= UPPER; celsius += STEP){
        printf("\n%7.0f\t\t%10.1f", celsius, Fahrenheit(celsius));
    }
    return 0;
}