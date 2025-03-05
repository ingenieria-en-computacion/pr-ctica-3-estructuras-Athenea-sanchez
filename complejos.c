#include "complejos.h"
#include <stdio.h>
#include <math.h>
#define letraIma 'i' 

COMPLEJO asignaReal(COMPLEJO c,REAL a){
     c.real=a; 
     return c; 
}

COMPLEJO asignaImaginario(COMPLEJO c,IMAG b){
      c.imaginario=b; 
      return c; 
}

REAL parteReal(COMPLEJO c){
       printf("Parte real:\n%.2f",c.real); 
       return c.real; 
}

IMAG parteImaginaria(COMPLEJO c){
        printf("Parte imaginaria:\n%f%c",c.imaginario,letraIma); 
        return c.imaginario; 
}

MOD moduloComplejo(COMPLEJO c){
        double modulo;
        modulo= sqrt ((c.imaginario*c.imaginario)+(c.real*c.real)); 

 return modulo; 
}

COMPLEJO sumaComplejos(COMPLEJO c, COMPLEJO d){
    COMPLEJO f;
    f.real = c.real + d.real;
    f.imaginario = c.imaginario + d.imaginario;
 return f;
}
