#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ePersona.h"


persona alta(persona per)

{
     printf("Ingrese El nombre: ");
        fflush(stdin);
        scanf("%s",per.nombre); /// para llamarlo uso per.nombre (per es la variable .nombre digo donde lo guardo)

        strupr(per.nombre);

        printf("Ingrese El apellido: ");
        fflush(stdin);
        scanf("%s",per.apellido);

        strupr(per.apellido);

        printf("Ingrese la edad: ");
        scanf("%d",&per.edad);

        per.isEmpy=0;

    return per;
}
void mostrar(persona per)
{
     printf("%s \t %s \t %d \t %d \t", per.nombre,per.apellido,per.edad,per.isEmpy);


}

