#include <stdio.h>
#include <stdlib.h>


typedef struct
    {
        char apellido[31];
        char nombre[31];
        int edad[3];
        int isEmpy; // bandera
    }ePersona;

void alta(ePersona pers[], int cantidad);

void mostar(ePersona pers[], int cantidad);
