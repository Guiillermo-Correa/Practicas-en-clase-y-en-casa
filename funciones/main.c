#include <stdio.h>
#include <stdlib.h>

// DEECLARACION O PROTOTIPO
int suma(int , int );

int main()
{
    int numero1,numero2,total;
    printf("INGRESE EL PRIMER NUMERO : ");
    scanf("%d",&numero1);
    printf("INGRESE EL SEGUNDO NUMERO : ");
    scanf("%d",&numero2);
    //LLAMADA DE LA FUNCION//
     total=suma(numero1,numero2);//total=numero1+numero2;
    printf("LA SUMA ES : %d ",total);
    return 0;
}
// Cuerpo , Desarrollo o Definicion
int suma(int op1, int op2)
    {
        int res;
        res=op1+op2;
        return res ;
    }
