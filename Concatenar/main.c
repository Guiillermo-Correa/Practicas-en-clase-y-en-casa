#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[64];
    char apellido[64];
   char apellidoNombre[64];

// ***********************INGRESO DE DATOS Y CARGA******************************//
    printf("Nombre:  ");
    scanf("%s",nombre);

    printf("Apellido: ");
    scanf("%s",apellido);
//********************************************//
// PASO TODO A MINISCULA Y EL PRIMER CARACTER A MAYUSCULA ///////
    strlwr(apellido);// MINUSCULA
    strlwr(nombre);// MINUSCULA
    nombre[0]=toupper(nombre[0]);// PRIMER CARACTER DE NOMBRE EN MAYUSCULA
    apellido[0]=toupper(apellido[0]);

//****************************************************//
//*************LIMPIO EL BUFFER**************///////
    apellidoNombre[0]= '\0';
    //strcpy(apellidoNombre,apellido);
//*****************************************************//
//************************** CONCATENO**********************
    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre," ");// comillas dobles por que trabaja con cadenas
    strcat(apellidoNombre,nombre);

//**********************************************************************//
        system("cls");
//*************MUESTRO POR PANTALLA CON PRINTF*************************//

    printf("%s", apellidoNombre);

    return 0;
}
