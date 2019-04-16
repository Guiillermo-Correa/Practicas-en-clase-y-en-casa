#include <stdio.h>
#include <stdlib.h>
#include "Pers.h"
#include <string.h>

void alta(ePersona pers[], cantidad)
{
    int i;
    for(i=0;i< cantidad ;i++)
    {
         printf("Ingrese El nombre: ");
        fflush(stdin);
        scanf("%s",pers[i].nombre); /// para llamarlo uso per.nombre (per es la variable .nombre digo donde lo guardo)

        strupr(pers.nombre);

        printf("Ingrese El apellido: ");
        fflush(stdin);
        scanf("%s",pers[i].apellido);

        strupr(per.apellido);

        printf("Ingrese la edad: ");
        scanf("%d",&pers[i].edad);

        pers[i].isEmpy=0;


    }

}

void mostrar(ePersona pers[], cantidad)
{
        int i;
    for(i=0;i< cantidad ;i++)
    {
        printf("%s \t %s \t %d \t %d \t", pers[i].nombre,pers[i].apellido,pers[i].edad,pers[i].isEmpy);
    }



}
