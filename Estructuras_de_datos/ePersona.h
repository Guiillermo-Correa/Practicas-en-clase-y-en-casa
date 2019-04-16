#include <stdio.h>
#include <stdlib.h>


typedef struct
    {
        char apellido[31];
        char nombre[31];
        int edad;
        int isEmpy; // bandera
    }persona;

persona alta (persona per);

void mostrar(persona per);
