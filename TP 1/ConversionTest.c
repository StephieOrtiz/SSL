#include <assert.h>
#include <math.h>
//Test de las funciones

int floatcomp (float x, float y, float epsilon);

int main () {
    //Pruebas funcion Celsius 

    assert(FloatEquals(0, Celsius(32), 0.1));
    assert(FloatEquals(20, Celsius(68), 0.1));
    assert(FloatEquals(300, Celsius(572), 0.1));
    assert(FloatEquals(-10, Celsius(14), 0.1));
    assert(FloatEquals(-20, Celsius(-4), 0.1));
    
    // Pruebas funcion Fahrenheit

    assert(FloatEquals(0, Fahrenheit(-17.8), 0.1));
    assert(FloatEquals(100, Fahrenheit(37.8), 0.1));
    assert(FloatEquals(300, Fahrenheit(148.9), 0.1));
    assert(FloatEquals(14, Fahrenheit(-10), 0.1));
    assert(FloatEquals(-4, Fahrenheit(-20), 0.1));
}

int FloatEquals (float x, float y, float epsilon) {
    return fabs (x - y) < epsilon ;
}