#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int main()
{
    int edad[MAX],i,leg;
    float sueldo[MAX],suma=0,prom,aux;
    char seguir;

        for(i=0;i<MAX;i++)
        {
            edad[i]=0;
            sueldo[i]=0;
        }

        do
        {
            printf("Ingrese Legajo: \n");
            scanf("%d",&leg);
            printf("Ingrese Edad: \n");
            scanf("%d",&edad[leg-1]);
            printf("Ingrese el sueldo: \n");
            scanf("%f",&aux);
            sueldo[i]=aux;
            system("cls");
            printf("Desea ingresar otro dato S/N?");
            fflush(stdin);//PONER SIEMPRE CUANDO PEDIMOS SI SE QUIERE SEGUIR O NO
            scanf("%c",&seguir);

        }while(seguir=='s');

        /*for(i=0;i<MAX;i++)
            suma=suma+sueldo[i];
            prom=suma/MAX;
            printf("El sueldo promedio es %.2f",prom);
        */

    return 0;
}


/*

 int datos [5];
    int acum=0,i;

    for(i=0; i<CANT;i++)
    {
        printf("Edad :\n");
        scanf("%d",&datos[i]);
        acum=acum+datos[i];
    }
        system("cls");
    printf("El promedio es : %d\n",acum/CANT);
    return 0;
*/


////////////// CARGA DE LEGAJO Y NOTAS POR ARRAYS (SECUENCIAL)//////////////////////////////////////////////
/*
PONER EL DEFINE QUE SE QUIERA
#define CANT n
int main()
{

    int legajo[CANT];
    int nota1[CANT];
    int nota2[CANT];
    int nota3[CANT];
    int i,promedio=0;


    for(i=0; i<CANT;i++)
    {
        printf("Legajo:\n");
        scanf("%d",&legajo[i]);

        printf(" Nota 1:\n");
        scanf("%d",&nota1[i]);

        printf("Nota 2:\n");
        scanf("%d",&nota2[i]);

        printf("Nota 3:\n");
        scanf("%d",&nota3[i]);

        promedio=nota1[i]+nota2[i]+nota3[i];
    }

    printf("El Legajo es: %d\n La nota 1 es: %d\n La nota 2 es: %d\n La nota 3 es: %d\n El promedio es: %d ", legajo[2],nota1[2],nota2[2],nota3[2],promedio/CANT);
    return 0;
}
*/
