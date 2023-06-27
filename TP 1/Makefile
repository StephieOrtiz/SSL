all: test TablasdeConversion

TablasdeConversion : Conversion.c
       gcc TablasdeConversion.c Conversion.o -o TablasdeConversion

conversion.o: conversion.c
       gcc -c Conversion.c

ConversionTest: ConversionTest.c  
       gcc ConversionTest.c Conversion.o -o ConversionTest

test: ConversionTest
      ./ConversionTest
