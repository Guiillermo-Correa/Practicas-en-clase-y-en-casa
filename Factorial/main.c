#include <stdio.h>
#include <stdlib.h>

// Factorial con incremento //
int factorial(int n);

int main()
{
    int total;
    int n;

    printf("Ingrese un numero ");
    scanf("%d",&n);

    total=factorial(n);

    printf("El factorial de %d es %d",n ,total);

    return 0;
}


int factorial(int n)

{
    int resp=1,i;

    for(i=1;i<=n;i++)

    {
        resp=resp*i;
    }


    return resp;
}


/*
// Factorial con decremento //

int factorial(int n);

int main()
{
    int total;
    int n;

    printf("Ingrese un numero ");
    scanf("%d",&n);

    total=factorial(n);

    printf("El factorial de %d es %d",n ,total);

    return 0;
}


int factorial(int n)

{
    int resp=1,i;

    for(i=n;i>0;i--)

    {
        resp=resp*i;
    }


    return resp;
}

*/

/*
//Recursividad//
int factorial(int );
int main()
{
        int valor,result;
        printf("\nIngrese numero:");
        scanf("%d",&valor);
        result=factorial(valor);
        printf("\nEl factorial de %d es %d",valor,result);
}

int factorial(int n)
{
    int resp;
    if(n==1)
        return 1;
    resp=n* factorial(n-1);
    return (resp);
}
*/
