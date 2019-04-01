#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
   char seguir='s';
    int opcion=0;

    float numeroUno=0;
    float numeroDos=0;

    float sumar;
    float restar;
    float dividir;
    float multiplicar;
    float facUno;
    float facDos;


    while(seguir=='s')

    {


        printf("                                                CALCULADORA                              \n");
        printf("                                    --------------------------------------               \n");
        printf("                                    | 1- Ingresar 1er operando   (A=%.f)   |               \n",numeroUno);
        printf("                                    | 2- Ingresar 2do operando   (B=%.f)   |               \n",numeroDos);
        printf("                                    | 3- Calcular la suma (A+B)          |               \n");
        printf("                                    | 4- Calcular la resta (A-B)         |               \n");
        printf("                                    | 5- Calcular la division (A/B)      |               \n");
        printf("                                    | 6- Calcular la multiplicacion (A*B)|               \n");
        printf("                                    | 7- Calcular el factorial (A!)      |               \n");
        printf("                                    | 8- Calcular todas las operacione   |               \n");
        printf("                                    | 9- Salir                           |               \n");
        printf("                                    --------------------------------------               \n");

        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
            case 1:

                system("cls");
                printf("Ingrese el primer numero ");
                scanf("%f",&numeroUno);

                break;
            case 2:
                system("cls");
                printf("Ingrese el segundo numero ");
                scanf("%f",&numeroDos);


                break;
            case 3:
                    system("cls");
                   sumar = suma(numeroUno,numeroDos);
                    printf("La suma es : %.2f\n", sumar);
                    system("pause");


                break;
            case 4:

                system("cls");
               restar = resta(numeroUno, numeroDos);
               printf("La resta es : %.2f\n",restar);
               system("pause");

                break;
            case 5:
                        system("cls");
                 if (numeroDos == 0 || numeroDos < 0)
                {
                     printf("\n 0 o un numero negativo no es una opcion valida- Reingrese: ");
                        scanf("%f",&numeroDos);


                } else

                    {
                        dividir = division(numeroUno,numeroDos);
                        printf("La division es: %.2f\n",dividir);
                    }

                system("pause");


                break;
            case 6:
                                system("cls");
                multiplicar = multiplicacion(numeroUno,numeroDos);

                printf("La multiplicacion es: %.2f\n", multiplicar);
                system("pause");

                break;
            case 7:

                system("cls");
                if(numeroUno<1 || numeroDos<1)
                {

                    printf("Si desea calcular un factorial, debe ser de un numero mayor que 0 y no debe ser negativo\n");
                    system("pause");

                }else
                {


                    facUno = factorial(numeroUno);
                    facDos = fact(numeroDos);

                    printf("El factorial A es: %.2f y El factorial B es: %.2f\n",facUno,facDos );
                    system("pause");


                }

                break;


            case 8:

                system("cls");
                sumar = suma(numeroUno,numeroDos);
                printf("La suma es : %.2f\n", sumar);

                restar = resta(numeroUno, numeroDos);
               printf("La resta es : %.2f\n",restar);


                 if (numeroDos == 0 || numeroDos < 0)
                {
                     printf("\n 0 o un numero negativo no es una opcion valida- Reingrese: ");
                        scanf("%f",&numeroDos);


                } else

                    {
                        dividir = division(numeroUno,numeroDos);
                        printf("La division es: %.2f\n",dividir);
                    }


               multiplicar = multiplicacion(numeroUno,numeroDos);
                printf("La multiplicacion es: %.2f\n", multiplicar);


               if(numeroUno<1 || numeroDos<1)
                {

                    printf("Si desea calcular un factorial, debe ser de un numero mayor que 0 y no debe ser negativo\n");
                    system("pause");

                }else

                {


                    facUno = factorial(numeroUno);
                    facDos = fact(numeroDos);

                    printf("El factorial A es: %.2f El factorial B es: %.2f\n",facUno,facDos );
                    system("pause");


                }

                system("pause");



                break;
            case 9:
                seguir = 'n';

                break;

               default:


                printf("\n Numero ingresado no valido... Ingrese un numero del 1 al 9\n");
                system("pause");
                break;
        }

    }

    return 0;
}
