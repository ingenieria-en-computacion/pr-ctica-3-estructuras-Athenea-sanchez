#include <stdio.h>
#include "complejos.h"

int main() {
    // Declaración de dos números complejos
    COMPLEJO c = {0, 0}, a = {0, 0}, resultado; 
    double b,d,e,f; 

    // Asignación primer complejo
    printf("ingrese la parte real del primer numero complejo:\n");
    scanf ("%lf",&b);
    c = asignaReal(c,b);

    printf("ingrese la parte imaginaria con signo del primer numero complejo:\n");
    scanf ("%lf",&d);
    c = asignaImaginario(c,d);

    // segundo complejo

    printf("ingrese la parte real del segundo numero complejo:\n");
    scanf ("%lf",&e);
    a = asignaReal(a,e);
    printf("ingrese la parte imaginaria con signo del segundo numero complejo:\n");
    scanf ("%lf",&f);
    a = asignaImaginario(a, f);

    // Prueba de funciones
    printf("\n COMPLEJO 1 \n");
    parteReal(c);
    printf("\n");
    parteImaginaria(c);
    printf("\n");
    printf("Modulo: %f\n", moduloComplejo(c));

    printf("\n COMPLEJO 2 \n");
    parteReal(a);
    printf("\n");
    parteImaginaria(a);
    printf("\n");
    printf("Modulo: %f\n", moduloComplejo(a));

    // Suma de complejos
    resultado = sumaComplejos(c, a);
    printf("\n SUMA DE COMPLEJOS \n");
    printf("Resultado: %f+(%fi)\n", resultado.real, resultado.imaginario);

    return 0;
}
