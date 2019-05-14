#include <stdio.h>
#include <stdlib.h>

/*
1) Escribir 4 funciones que reciban un array de números int y su tamaño, e impriman los números por pantalla.

* 1era funcion: Recibe el array como vector y accede a los datos utilizando notación vectorial ([])

* 2da funcion: Recibe el array como vector y accede a los datos utilizando aritmetica de punteros

* 3era funcion: Recibe el array como puntero y accede a los datos utilizando notación vectorial ([])

* 4da funcion: Recibe el array como puntero y accede a los datos utilizando aritmetica de punteros

 */


//int swap (char x , char y);
//int swa (char* c , char* d);


int main()
{


    return 0;
/*
    char a='A';

    char *punteroInt;
    char **punteroPuntero;

    punteroInt = &a; // Obtenemos la posición de memoria

    punteroPuntero = &punteroInt; // Obtenemos la posición de memoria

    printf("Puntero int\n");

    printf("%c\n",*punteroInt);

    printf("punteroPuntero\n");

    printf("%c\n",**punteroPuntero);

    return 0;
*/
/*
char a = '1', b = '2' ;

char c = '1', d = '2' ;

    swap(a , b);

    swa(&c , &d);

printf("A: %c\n",a);

printf("B: %c\n",b);

printf("C: %c\n",c);

printf("D: %c\n",d);

return 0;

*/
/*
    int* punteroInt = NULL;
    char* punteroChar = NULL;
    float* punteroFloat = NULL;

    int auxInt = 10;
    char auxChar = 'a';
    float auxFloat = 3.14;


    punteroInt = &auxInt ;
    punteroChar = &auxChar;
    punteroFloat = &auxFloat;


    printf("puntero int\n\n");

    printf("%i\n",*punteroInt);

    printf("puntero char\n\n");
    printf("%c\n",*punteroChar);

    printf("puntero float\n\n");
    printf("%f\n",*punteroFloat);

    int n[3]={1,2,3};

    int *ptr, i;

    ptr=n;


     printf("TERCERO CASO\n");
    for(i=0;i<3;i++)
    {


        printf("%d\n",ptr[i]);

    }

    printf("CUARTO CASO\n");
   for(i=0;i<3;i++)

    {
        printf("%d\n",*(n+i));
    }

     printf("PRIMER CASO\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",n[i]);

    }

    printf("SEGUNDO CASO\n");
   for(i=0;i<3;i++)

    {
        printf("%d\n",*(ptr+i));
    }

    return 0;
*/

}

///***************** a=1 b=2************************///
/*
int swap (char x , char y)
{
    char z ;

    z = x;
    x = y;
    y = z;
    return 0;
}
*/
///*************** c=2 d=1********************///
/*
int swa (char* c , char* d)
{
    char e ;
    e = *c;
    *c = *d;
    *d = e;
    return 0;
}
*/
