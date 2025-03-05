#ifndef COMPLEJO_H
#define COMPLEJO_H

typedef double REAL;
typedef double IMAG; 
typedef double MOD; 

typedef struct Complejo {
    REAL real;
    IMAG imaginario;
} COMPLEJO;

// Funciones para números complejos
COMPLEJO asignaReal(COMPLEJO,REAL);
COMPLEJO asignaImaginario(COMPLEJO,IMAG);
REAL parteReal(COMPLEJO);
IMAG parteImaginaria(COMPLEJO);
MOD moduloComplejo(COMPLEJO);
COMPLEJO sumaComplejos(COMPLEJO, COMPLEJO);

#endif
