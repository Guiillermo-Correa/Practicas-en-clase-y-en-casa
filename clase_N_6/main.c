#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[55];

    char apellido[55];

    printf("Ingrese el nombre: ");

    fflush(stdin);

    gets(nombre);
   // scanf("%s", nombre);

     printf("Ingrese el apellido: ");

    fflush(stdin);

    gets(apellido);
    //scanf("%s", apellido);
    system("cls");
    printf("El nombre ingresado es: %s \n\n El apellido es: %s \n\n ",nombre, apellido);

    return 0;

}




// CODIGO ASCII https://elcodigoascii.com.ar/
