#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 1
#include "clase_9.h"

int main()
{
    char seguir='s';
    int opcion=0;

     ePersona pers[CANT];

    ordenar(pers,CANT);

    system("cls");
    while(seguir=='s')
    {
        printf("1_ Alta \n");
        printf("2_ Mostrar \n");
        printf("3_");
       // printf("");
        //printf("");
        printf("_ Salir \n");

        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
            case 1:
                system("cls");
                alta(pers, CANT);
                break;

            case 2:
                system("cls");
                mostrarTodos(pers, CANT);
                break;

            case 3:


                seguir='n';
                break;
            system("cls");

            default:
                system("cls");
                printf("NUMERO INGRESADO NO VLAIDO\n");
                 system("pausa");
                break;

        }


    }




    return 0;
}

/*




*/

