#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define TAM 3

typedef struct
{
    int legajo;
    int nombre [20];
    int sexo;
    float sueldo;
    int estado;

}eEmpleado;

void inicializarEmpleados (eEmpleado vec [],int tam);
{
    for (int i = 0; i<tam;i++)
    {
        vec [i].ocupado=0;
    }
}

int menu ()
void inicializarEmpleados (eEmpleado vec [],int tam);
void mostrarEmpleado (eEmpleado emp);
void mostrarEmpleados(eEmpleado vec [],int tam);

int main()
{
    int menu;
    char seguir ='s',confirma;

    system ("cls");

    printf(" ***ABM Empleados*** \n\n");
    printf("Ingrese una opcion\n");
    printf("1-Alta empleado\n");
    printf("2-Baja empleado\n");
    printf("3-Modificacion empleado\n");
    printf("4-Listar Empleado\n");
    printf("5-Ordenar Empleado\n");
    printf("6-Salir\n");

        do
        {
            printf("\nSu opcion: ");
            scanf("%d",&menu);
            switch (menu)
            {
                case 1:
                    {
                        printf("Alta empleado\n");
                        system("pause");
                        break;
                    }

                case 2:
                    {
                        printf("Baja empleado\n");
                        system("pause");
                        break;
                    }

                case 3:
                    {
                        printf("Modificacion empleado\n");
                        system("pause");
                        break;
                    }

                case 4:
                    {
                        printf("Listar Empleado\n");
                        system("pause");
                        break;
                    }

                case 5:
                    {
                        printf("Ordenar Empleado\n");
                        system("pause");
                        break;
                    }

                case 6:
                    {
                        printf("Desea salir (s/n): ");
                        fflush(stdin);
                        confirma = getche ();

                        if (tolower (confirma) == 's')
                            {
                                seguir='n';
                            }
                         break;
                    }

                default:
                    {
                        printf("Seleccione una opcion valida\n");
                        break;
                    }
            }
        }while (seguir == 's');

    return 0;
}
