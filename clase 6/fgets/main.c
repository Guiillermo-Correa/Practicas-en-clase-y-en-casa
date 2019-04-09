// PENSARLO PARA FUNCION  https://elcodigoascii.com.ar/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[64];
    int cantidad;

    printf("Nombre: ");
    //fgets(buffer, 62, stdin);
    fgets(buffer,sizeof(buffer)-2,stdin); // (stdin) digo de donde se ingresa todo\

    // -2 esta puesto para borrar \0 y otro caracter. si pienso en fgets si o si va -2

    cantidad = strlen(buffer);

    buffer[cantidad-1] = '\0';

    printf("%s", buffer);

    return 0;
}
