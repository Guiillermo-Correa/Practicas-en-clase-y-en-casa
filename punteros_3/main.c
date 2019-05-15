#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD 3
typedef struct
{
    char nombre[50];
    int nota;
}alumno;

    void ordenar(alumno* arrayPunterosAlumnos[3], int longitudArray);
int main()
{
    int i,auxiliarNota;
    char auxiliarNombre[50];
    alumno arrayAlumnos[CANTIDAD];
    alumno* arrayPunterosAlumnos[CANTIDAD];
    for(i=0; i<CANTIDAD; i++)
    {
        // Copiamos la posición de memoria de cada elemento
        arrayPunterosAlumnos[i] = &arrayAlumnos[i];
         printf("\nIngrese el nombre: ");
        scanf("%s",auxiliarNombre);
        strcpy(arrayAlumnos[i].nombre, auxiliarNombre); //FALTARIA VALIDAR

         printf("\nIngrese la Nota [0-10]: ");
        scanf("%i",&auxiliarNota);
        arrayAlumnos[i].nota = auxiliarNota;

         //FALTA VALIDAR
    }
    printf("/n-MOSTRAMOS EL ARRAY SIN ORDENAR-\n\n");

    for(i=0; i<CANTIDAD; i++)
    {
        printf("%s\n\n", arrayPunterosAlumnos[i]->nombre);
         printf("%i\n\n",arrayPunterosAlumnos[i]->nota);
    }

    ordenar(arrayPunterosAlumnos , CANTIDAD);
     printf("-MOSTRAMOS EL ARRAY ORDENADO-\n\n");

    for(i=0; i<CANTIDAD; i++)
    {
        printf("%s\n\n", arrayPunterosAlumnos[i]->nombre);
         printf("%i\n\n",arrayPunterosAlumnos[i]->nota);
    }
    return 0;
}
void ordenar(alumno* arrayPunterosAlumnos[], int longitudArray)
{
     alumno* punteroAuxiliarAlumno;
     int i,j;

     for(i = 0; i < longitudArray -1 ; i++)
     {
         for(j = i+1; j < longitudArray ; j++)
         {
             if(arrayPunterosAlumnos[i]->nota > arrayPunterosAlumnos[j]->nota)
             {
                 punteroAuxiliarAlumno = arrayPunterosAlumnos[i];
                 arrayPunterosAlumnos[i] = arrayPunterosAlumnos[j];
                 arrayPunterosAlumnos[j] = punteroAuxiliarAlumno;
             }
         }
     }
}
