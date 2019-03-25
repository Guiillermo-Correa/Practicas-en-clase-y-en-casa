#include <stdio.h>
#include <stdlib.h>

int main()
{
   int maximo,minimo;
   int acumulador;
   int auxiliar;
   int i;

    printf("Ingrese un numero \n");
   scanf("%d",&auxiliar);


   minimo=auxiliar;
   maximo=auxiliar;
   acumulador=auxiliar;


   for(i=0;i<4;i++)
   {
        printf("Ingrese un numero \n");

        scanf("%d",& auxiliar);

        acumulador=acumulador+auxiliar;

        if(auxiliar > maximo)
        {
            maximo = auxiliar;
        }

        if(auxiliar < minimo)
        {
            minimo = auxiliar;
        }

   }

   printf("El maximo es: %d\n",maximo);
    printf("El minimo es: %d\n",minimo);
   printf("El acumulador es: %d\n",acumulador/5 );



    return 0;
}
