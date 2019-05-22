#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>


#include "input.h"
#include "autores.h"

#define TAM_SOCIOS 50
#define TAM_AUTORES 5
#define TAM_LIBROS 10
#define TAM_PRESTAMOS 100

int main()
{
        system("color 5E");
        char seguir = 's';
        char confirma;
        int banderaAlta;
        int codigoIncremental=10;

        int banderaAlta2;
        int codigoIncremental2=3;

        int auxLegajo;




    eSocios vecSocios[TAM_SOCIOS];
    eAutores vecAutores[TAM_AUTORES];
    eLibros vecLibros[TAM_LIBROS];
    ePrestamos vecPrestamos[TAM_PRESTAMOS];


    inicializacion(vecSocios,TAM_SOCIOS,vecAutores,TAM_AUTORES,vecLibros,TAM_LIBROS,vecPrestamos,TAM_PRESTAMOS);




        do
    {
        switch(menuSocios())
        {
            case 'a':
                printf("\nAlta socio\n");
                banderaAlta=(altaSocio(vecSocios,TAM_SOCIOS,codigoIncremental));
            system("pause");

            if(banderaAlta==1){
                codigoIncremental++;
            }

                    break;
            case 'b':
                printf("\nModificar socio\n");

                modificarSocio(vecSocios,TAM_SOCIOS);

                break;


            case 'c':
                printf("\nBaja socio\n");
                bajaSocio(vecSocios,TAM_SOCIOS);
                    break;

            case 'd':
                printf("\nListar socios\n");
                ordenarSociosApellido(vecSocios,TAM_SOCIOS);
                mostrarSocios(vecSocios,TAM_SOCIOS);
                    break;
            case 'e':
                printf("Listar libros");
                    mostrarLibros(vecLibros,TAM_LIBROS);

                    break;
            case 'f':
                printf("listar autores");
                    mostrarAutores(vecAutores,TAM_AUTORES);
                    break;
            case 'g':
                printf("Prestamos (alta)");
                banderaAlta2=altaPrestamos(vecPrestamos,TAM_PRESTAMOS,vecSocios,TAM_SOCIOS,vecAutores,TAM_AUTORES,codigoIncremental2,vecLibros,TAM_LIBROS);

            if(banderaAlta2==1){
                codigoIncremental2++;
            }

                    break;

            case 'h':
                informarPromedioDiarioPrestamos(vecPrestamos,TAM_PRESTAMOS);
                system("pause");
                break;

            case 'i':
                printf("Sin resolver\n");//;c
                system("pause");
                break;



             case 'j':
                printf("Listar todos los socios que solicitaron el prestamo de un libro\n");
                mostrarLibros(vecLibros,TAM_LIBROS);
                mostrarPrestamosDeUnLibro(vecLibros,TAM_LIBROS,vecPrestamos,TAM_PRESTAMOS);
                printf("\n");
                system("pause");

                break;

             case 'k':
                 printf("Mostrar prestamos de un socio determinado\n");
                 mostrarSocios(vecSocios,TAM_SOCIOS);
                 mostrarPrestamosDeUnSocio(vecSocios,TAM_SOCIOS,vecPrestamos,TAM_PRESTAMOS);

                 printf("\n");
                 system("pause");


                break;

             case 'l':
                printf("Mostrar libro menos solicitado a prestamo\n");
                informarLibroMenosPrestado(vecSocios,TAM_SOCIOS,vecLibros,TAM_LIBROS,vecPrestamos,TAM_PRESTAMOS);
                system("pause");
                break;


            case 'm':
                printf("Informar socio con mas prestamos\n");
                informarSocioConMasPrestamos(vecSocios,TAM_SOCIOS,vecPrestamos,TAM_PRESTAMOS);
                system("pause");
                break;


            case 'n':
                printf("mostrar prestamos de una fecha\n");
                mostrarPrestamosDeUnaFecha(vecLibros,TAM_LIBROS,vecPrestamos,TAM_PRESTAMOS);
                printf("\n");
                system("pause");
                break;

            case 'o':
                printf("mostrar socios que hicieron un prestamo en una fecha\n");
                mostrarPrestamosDeUnaFechaSocios(vecSocios,TAM_SOCIOS,vecPrestamos,TAM_PRESTAMOS);
                system("pause");
                break;

            case 'p':
                printf("Mostrar libros ordenados descendente");
                ordenarLibrosTituloDes(vecLibros,TAM_LIBROS);
                mostrarLibros(vecLibros,TAM_LIBROS);
                printf("\n");
                system("pause");
                break;

            case 'q':
                 printf("Listar todos los socios ordenados por apellido (ascendente)\n");
                 ordenarSociosApellido(vecSocios,TAM_SOCIOS);
                 mostrarSocios(vecSocios,TAM_SOCIOS);
                 system("pause");
                    break;


                case 'r':
                printf("\nConfirma la salida del programa s/n?: ");
                fflush(stdin);
                confirma = getche();

                if( tolower(confirma) == 's')
                {
                    printf("\n\n-- Programa finalizado --\n");
                    seguir = 'n';
                }
                break;



        default:
            printf("\n Opcion invalida\n\n");
            system("pause");
            break;
        }
    }
    while(seguir == 's');


    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////




