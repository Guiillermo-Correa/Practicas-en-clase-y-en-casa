#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
//autores y libros hardcodeados

#include "input.h"
#include "autores.h"
char menuSocios()
{


    char opcion;
    printf("a- Alta socio\n");
    printf("b- Modificar un socio\n");
    printf("c- Baja de socio\n");
    printf("d- Listar socios ordenados alfabeticamente\n");
    printf("e- Listar libros\n");
    printf("f- Listar autores\n");
    printf("g- Prestamos(alta)\n");
    printf("\n Informes\n\n");
    printf("h- Informar total general y promedio diario de prestamos\n");
    printf("i- Informar la cantidad de dias que el promedio no es superado\n");
    printf("j- Listar todos los socios que solicitaron el prestamo de un libro\n");
    printf("k- Listar todos los libros que fueron solicitados a prestamo de un socio\n");
    printf("l- Listar el/los libros menos solicitados en prestamos\n");
    printf("m- Listar el/los socios que realizaron mas solicitudes de prestamos\n");
    printf("n- Listar todos los libros solicitados en una fecha determinada\n");
    printf("o- Listar todos los socios que realizaron un prestamo en una fecha determinada\n");
    printf("p- Listar todos los libros ordenados por titulo(descendente)\n");
    printf("q- Listar todos los socios ordenados por apellido (ascendente)\n");
    printf("r- salir\n");

    fflush(stdin);
    printf("\nIngrese una opcion: ");
    scanf("%c",&opcion);

    return opcion;

}
/////////////////////////////////////////////////////////////////
int subMenuModificar()
{
    int opcion;
    printf("1- Para modificar apellido\n");
    printf("2- Para modificar nombre\n");
    printf("3- Para modificar sexo\n");
    printf("4- Para modificar teleofno\n");
    printf("5- Para modificar eMail\n");

    printf("\nIngrese una opcion: ");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}
////////////////////////////////////////////////////////////
void inicializarSocios(eSocios vec[], int tam)
{
    int i;
    for( i=0; i < tam; i++)
    {
        vec[i].isEmpty = 0;
    }
}
/////////////////////////////////////////////////////////////////
void inicializarPrestamos(ePrestamos vecPrestamos[], int tamPrestamos)
{
    int i;
    for( i=0; i < tamPrestamos; i++)
    {
        vecPrestamos[i].isEmpty = 0;
    }
}
////////////////////////////////////////////////////////////
void inicializacion(eSocios vec[], int tam, eAutores vecAutores[], int tamAutores, eLibros vecLibros[], int tamLibros,ePrestamos vecPrestamos[],int tamPrestamos)
{
    int i;
    inicializarSocios(vec,tam);
    eSocios listaSocios[10]=
        {{0, "Frias","Brenda", 'f', 42203934,"email@lala", 24,12,1997, 1},
        {1, "Frias", "Rodolfo",'m', 42203933,"frias@lala",5,6,2018, 1},
        {2, "Paoli","Elia", 'f', 42201211,"paoli@lala",9,12,2013, 1},
        {3, "Marquez","Juan", 'm',42203900,"juan@lala",16,3,2002, 1},
        {4, "Barry","Allen", 'm', 42205050,"barry@lala",15,8,2011, 1},
        {5, "Watson","Ema", 'f', 43433333,"ema@lala",1,12,2008, 1},
        {6, "Gardel","Carlos", 'm', 11030346,"carlos@lala",21,6,2015, 1},
        {7, "Aumada","Raul", 'm', 55542211,"raul@lala",12,7,2016, 1},
        {8, "Diaz","Alejo", 'm', 42205959,"alejo@lala",7,3,2004, 1},
        {9, "Franco","Carla", 'f', 43845512,"carla@lala",1,11,2005, 1}};


    for ( i = 0; i < 10; i++)//copio los valores del hardcodeo en la estructura de eSocio.
    {
        vec[i] = listaSocios[i];
    }

   eAutores listaAutores[]= {{0, "Borges","Jorge",1},{1, "Alfo","Luis",1},{2, "Newt","Arlin",1},{3, "Ramirez","Ramiro",1},{4, "Fernandez","Pedro",1}};

    for ( i = 0; i < tamAutores; i++)//copio los valores del hardcodeo en la estructura de eAutores.
    {
        vecAutores[i] = listaAutores[i];
    }

    eLibros listaLibros[]= {{0, "La laguna",0,1},{1, "Cuentos para dormir",1,1},{2, "Casa embrujada", 2,1},{3, "Fisica cuantica",3,1},{4, "Matematicas",4,1},{5, "Leyendas urbanas", 1,1},{6, "Historia china", 3,1},{7, "Tu puedes cocinar",3,1},{8, "Juego de tronos",0,1},{9, "Ciencias naturales",2,1}};


    for (i = 0; i < tamLibros; i++)//copio los valores del hardcodeo en la estructura de eLibros.
    {
        vecLibros[i] = listaLibros[i];
    }

    inicializarPrestamos(vecPrestamos,tamPrestamos);
    ePrestamos listaPrestamos[]= {{0,3,0,12,12,1999,1},{1,2,1,3,3,2000,1},{2,1,2,4,5,2000,1},{3,1,1,12,12,1998,1},{4,1,1,12,12,1997,1}};
     for(i = 0;i < 6; i++)//copio los valores del hardcodeo en la estructura de ePrestamos.
        {
            vecPrestamos[i]=listaPrestamos[i];
        }


}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int buscarLibre(eSocios vecSocios[], int tamSocios)
{

    int i,indice = -1;

    for(i=0; i < tamSocios; i++)
    {
        if(vecSocios[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
///////////////////////////////////////////////////////////
int buscarSocio(eSocios vecSocios[], int tamSocios, int codigoSocio)
{

    int i,indice = -1;

    for(i=0; i < tamSocios; i++)
    {
        if(vecSocios[i].isEmpty == 1 && vecSocios[i].codigoSocio == codigoSocio)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
/////////////////////////////////////////////////////////////////////////////////
void obtenerAutor(eAutores vecAutores[], int tamAutores, int codigoAutor, char descMostrar[])
{
    int i;
    for(i=0; i<=tamAutores; i++)
    {
        if(codigoAutor == vecAutores[i].codigoAutor)
        {
            strcpy(descMostrar,vecAutores[i].apellido);
            break;
        }
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
void obtenerLibro(eLibros vecLibros[], int tamLibros, int codigoLibro, char descMostrar[])
{
    int i;
    for(i=0; i<=tamLibros; i++)
    {
        if(codigoLibro == vecLibros[i].codigoLibro)
        {
            strcpy(descMostrar,vecLibros[i].titulo);
            break;
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////
void mostrarSocio(eSocios listaSocios[], int i)
{

    printf("%03d\t%s\t%s\t%c\t%li\t%s\t%02d/%02d/%d\n", listaSocios[i].codigoSocio,listaSocios[i].apellido,listaSocios[i].nombre,listaSocios[i].sexo,listaSocios[i].telefono,listaSocios[i].eMail,listaSocios[i].fechaAsociado.dia,listaSocios[i].fechaAsociado.mes,listaSocios[i].fechaAsociado.anio);
}
///////////////////////////////////////////////////////////////
void mostrarLibro(eLibros vecLibros[], int i)
{

    printf("%03d\t%d\t%s\t\n", vecLibros[i].codigoLibro,vecLibros[i].idCodigoAutor,vecLibros[i].titulo);
}
///////////////////////////////////////////////////////////////////////////////////////////
void mostrarSocios(eSocios vec[], int tam)
{
    int i,contador=0;
   printf("\nCodigo\tApelli.\tNombre\tSexo\tTelefono\t\tEmail\tIngreso\t\n");

    for(i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 1)
        {

            mostrarSocio(vec,i);
            contador++;
        }
    }
    if (contador==0)
    {
        printf ("No hay socios que listar\n\n");
    }

}
/////////////////////////////////////////////////////////////////////////////////////////////////
int altaSocio(eSocios vec[], int tam, int codigoMain)
{

    int indice;
    int altaOk=0;

    indice = buscarLibre(vec,tam);



    if(indice ==-1)
        {
            printf("\nNo hay lugar en el sistema\n");

        }
        else
            {
                vec[indice].codigoSocio=codigoMain++;

                getString(vec[indice].nombre,"Ingrese el nombre: ","Error,largo del nombre invalido",2,31);

                getString(vec[indice].apellido,"Ingrese el apellido: ","Error,Largo del apellido invalido",2,31);


                getCharGenre(&vec[indice].sexo,"Ingrese el sexo: ","Error, debe ingresar F o M");


                getInt(&vec[indice].telefono,"Ingrese su telefono: ","Error telefono invalido",1,99999999);

                getString(vec[indice].eMail,"Ingrese su email: ","Error,largo del email invalido",2,31);

                getInt(&vec[indice].fechaAsociado.dia,"Ingrese el dia de ingreso","Error, dia invalido",1,31);

                getInt(&vec[indice].fechaAsociado.mes,"Ingrese el mes de ingreso","Error, mes invalido",1,12);


                getInt(&vec[indice].fechaAsociado.anio,"Ingrese el anio de ingreso","Error, anio invalido",1900,2019);

                vec[indice].isEmpty =1;

                printf("\nALTA EXITOSA\n");

                altaOk=1;

            }

            return altaOk;



}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void modificarSocio(eSocios vec[], int tam)
{

    int codigo;
    int indice;
    char confirma;

    printf("Ingrese codigo de socio: ");
    scanf("%d",&codigo);

    indice=buscarSocio(vec,tam,codigo);

    if(indice==-1)
        {
            printf("\nError, no se encuentra este socio en el sistema\n");

        }else
            {
                do
                    {

                        printf("\nEs este el socio que desea modificar?\n");
                        mostrarSocio(vec,indice);
                        printf("Esta seguro que quiere cuntinuar? s/n: ");
                        fflush(stdin);
                        confirma=getche();
                        printf("\n");
                        system("pause");
                        if(tolower(confirma)=='n')
                        {
                        printf ("Modificacion cancelada!\n");
                            break;
                        }
                        else
                            {
                                switch(subMenuModificar())
                                {
                                    case 1:
                                        getString(vec[indice].apellido,"Ingrese el apellido: ","Error,Largo del apellido invalido",2,31);
                                            break;

                                    case 2:
                                        getString(vec[indice].nombre,"Ingrese el nombre: ","Error,largo del nombre invalido",2,31);
                                            break;
                                    case 3:
                                        getCharGenre(&vec[indice].sexo,"Ingrese el sexo: ","Error, debe ingresar F o M");
                                            break;
                                    case 4:
                                        getInt(&vec[indice].telefono,"Ingrese telefono: ","Error telefono invalido",1,9999999);
                                            break;
                                    case 5:
                                        getString(vec[indice].eMail,"Ingrese Email: ","Error email invalido",1,31);


                                            break;


                                    default:
                                        printf("\n Opcion invalida\n\n");
                                        system("pause");
                                            break;

                                }
                                printf("\nModificacion exitosa!!!\n");
                            }
                    }while(confirma!='s');
            }


}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
void bajaSocio(eSocios vec[], int tam)
{
    int codigo;
    int indiceCod;
    char confirma;

    printf("Ingrese codigo de socio: ");
    scanf("%d",&codigo);

    indiceCod=buscarSocio(vec,tam,codigo);


    if(indiceCod==-1)
        {
            printf("\nError, no se encuentra el socio en el sistema\n");

        }
        else
            {
                do
                    {
                        printf("\nel siguiente socio se eliminara del sistema...\n");
                         mostrarSocio(vec,indiceCod);
                        printf("Esta seguro que quiere cuntinuar? s/n: ");
                        fflush(stdin);
                        confirma=getche();
                        printf("\n");
                        system("pause");
                        if(tolower(confirma)=='n')
                        {
                        printf ("Baja cancelada!\n");
                            break;
                        }
                        else
                            {
                                vec[indiceCod].isEmpty=-1;
                                printf("\nBaja empleado exitosa\n");
                            }
                    }while(confirma!='s');
            }

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ordenarSociosApellido(eSocios vec[], int tam)
{
    eSocios auxSoc;
    int i,j;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(vec[i].apellido, vec[j].apellido)>0)//si las cadenas son iguales retornara 0, si la primera es mayor retornara un valor positivo y si es menor retornara un valor negativo.
            {
                auxSoc = vec[i];
                vec[i] = vec[j];
                vec[j] = auxSoc;
            }
        }
    }
    printf("\n-- Socios ordenados exitosamente --\n\n");

}
///////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarLibros(eLibros vecLibros[], int tamLibros)
{
    int i;
    for ( i = 0; i < tamLibros; i++ )
    {
        printf("\n%d %d %s", vecLibros[i].codigoLibro, vecLibros[i].idCodigoAutor, vecLibros[i].titulo);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarAutores(eAutores vecAutores[], int tamAutores)
{
    int i;
    for ( i = 0; i < tamAutores; i++ )
    {
        printf("\n%d %s %s", vecAutores[i].codigoAutor, vecAutores[i].apellido, vecAutores[i].nombre);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int altaPrestamos(ePrestamos vecPrestamos[],int tamPrestamos,eSocios vecSocios[], int tam,eAutores vecAutor[],int tamAutor, int codigoMain,eLibros vecLibros[],int tamLibros)
{


    int indice;
    int auxCodigo;
    int opcion;
    int altaOk=0;
    int indice2;

    indice=buscarLibrePrestamos(vecPrestamos,tamPrestamos);

    if(indice ==-1)
        {
            printf("\nNo hay lugar en el sistema\n");

        }
        else
            {

                vecPrestamos[indice].codigoPrestamo=codigoMain++;

                mostrarSocios(vecSocios,tam);
                getInt(&auxCodigo,"\nIngrese su codigo","Error, legajo invalido",0,200);
                indice2=buscarSocio(vecSocios,tam,auxCodigo);
                if(vecSocios[indice2].isEmpty!=1)
                    {
                        printf("\nError,No se encuentra\n");

                    }
                else{

                vecPrestamos[indice].idCodigoSocio=auxCodigo;



                mostrarLibros(vecLibros,tamLibros);
                getInt(&opcion,"\nIngrese el ID de libro","Error, ID invalido",0,9);
                vecPrestamos[indice].idCodigoLibro=opcion;

                getInt(&vecPrestamos[indice].fechaPrestamo.dia,"Ingrese el dia: ","Error, dia invalido",1,31);

                getInt(&vecPrestamos[indice].fechaPrestamo.mes,"Ingrese el mes: ","Error, mes invalido",1,12);

                getInt(&vecPrestamos[indice].fechaPrestamo.anio,"Ingrese el anio: ","Error, anio invalido",1950,2050);

                 vecPrestamos[indice].isEmpty =1;


                printf("\nALTA EXITOSA\n");
                altaOk=1;



                }
            }



                return altaOk;


}
int buscarLibrePrestamos(ePrestamos vecPrestamos[], int tamPrestamos)
{

    int indice = -1;
int i;
    for( i=0; i < tamPrestamos; i++)
    {
        if(vecPrestamos[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
///////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
void mostrarPrestamo(ePrestamos vecPrestamos[],int i)
{


    printf("\n %d\t  %d\t  %d\t  %02d/%02d/%d\t\ ",vecPrestamos[i].codigoPrestamo,vecPrestamos[i].idCodigoSocio,vecPrestamos[i].idCodigoLibro,vecPrestamos[i].fechaPrestamo.dia,vecPrestamos[i].fechaPrestamo.mes,vecPrestamos[i].fechaPrestamo.anio);
    printf("\n");

}
///////////////////////////////////////////////////////////////////////////////////////
void mostrarPrestamos(ePrestamos vecPrestamos[], int tamPrestamos)
{
    int i;
    int contador = 0;
     printf("\n ID PRES ID SOCIO ID LIBRO   FECHA\n");

    for(i=0; i < tamPrestamos; i++)
    {
        if(vecPrestamos[i].isEmpty == 1)
        {
            mostrarPrestamo(vecPrestamos,i);
            contador++;
        }
    }

    if( contador == 0)
    {
        printf("\n(!) No hay prestamos que mostrar (!)\n");
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void informarLibroMenosPrestado (eSocios vecSocios[], int tamSocios, eLibros vecLibros[],int tamLibros, ePrestamos vecPrestamos[], int tamPrestamos)
{
    int contador=0;
    int min=0;
    int idMin=0;
    int flag=0;
    int noEncontro=0;
    int i,j;


     for (i=0;i<tamLibros;i++)
     {


         for (j=0;j<tamPrestamos;j++)
         {
             if (vecPrestamos[j].idCodigoLibro==vecLibros[i].codigoLibro && vecPrestamos[j].isEmpty==1 && vecLibros[i].isEmpty==1)
             {
                 contador++;
                 if (min<contador || flag==0)
                 {
                     min=contador;
                     idMin=vecPrestamos[j].idCodigoLibro;
                     flag++;

                 }
            }
        }

    }
    if(contador==0)
        {
            printf("no hay prestamos");
        }


    printf("\nEl libro menos prestado es el %d\n\n", idMin);
    printf("\n");
    printf("\n idLib idAutor  Titulo\n");
    mostrarLibro(vecLibros,idMin);




}
/////////////////////////////////////////////////////////////////////////////////////////
void mostrarPrestamosDeUnSocio(eSocios vecSocios[],int tamSocios[],ePrestamos vecPrestamos[],int tamPrestamos)
{
    int contador = 0;
    int auxCodigo;
    int indice;
    int i;
                getInt(&auxCodigo,"\nIngrese su codigo","Error, codigo invalido",0,200);
                indice=buscarSocio(vecSocios,tamSocios,auxCodigo);
                if(vecSocios[indice].isEmpty!=1)
                    {
                        printf("\nError,No se encuentra su codigo\n");

                    }
                    else
                    {

                            printf("\n ID PRES  COD SOC  ID LIBRO  FECHA \n");

                            for(i=0; i < tamPrestamos; i++)
                            {
                                if(vecPrestamos[i].isEmpty == 1 && vecPrestamos[i].idCodigoSocio ==auxCodigo)
                                {
                                    mostrarPrestamo(vecPrestamos,i);
                                    contador++;

                                }

                            }
                            printf("Este SOCIO tiene %d prestamo/s",contador);



                    }

                    if(contador==0)
                        {
                            printf("\nEste empleado no tiene prestamos");
                        }

}
////////////////////////////////////////////////////////////////////////////////////////////
int buscarLibro(eLibros vecLibros[], int tamLibros, int codigoLibro)
{

    int indice = -1;
    int i;

    for(i=0; i < tamLibros; i++)
    {
        if(vecLibros[i].isEmpty == 1 && vecLibros[i].codigoLibro == codigoLibro)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
/////////////////////////////////////////////////////////////////////////////////////////////



void informarSocioConMasPrestamos (eSocios vecSocios[], int tamSocios, ePrestamos vecPrestamos[], int tamPrestamos)
{
    int contador=0;
    int max;
    int flag=0;
    int idMax;
    char nombreSocio[31];
    char apellidoSocio[31];
    int i,j;

    for (i=0;i<tamPrestamos;i++)
    {

        for (j=0;j<tamSocios;j++)
        {

            if (vecSocios[i].codigoSocio==vecPrestamos[j].idCodigoSocio)
            {
                contador++;
                if (contador>max || flag==0)
                {
                    idMax=contador;
                    max=vecSocios[i].codigoSocio;
                    strcpy(nombreSocio, vecSocios[i].nombre);
                    strcpy(apellidoSocio, vecSocios[i].apellido);
                    flag++;
                }
            }
        }
    }
    if (idMax>0)
    {
        printf("\nEl socio con mas prestamos es %d .", max);
        printf("\n");
        printf("idSoc   Apell  Nombr   sexo       telef          email          fechaAlta\n");
        mostrarSocio(vecSocios,max);
    }
    else
    {
        printf("\nNo hay nada que listar!!\n\n");
    }

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarPrestamosDeUnLibro(eLibros vecLibros[],int tamLibros,ePrestamos vecPrestamos[],int tamPrestamos)
{
    int contador = 0;
    int auxCodigoLib;
    int indice;
    int i;
                getInt(&auxCodigoLib,"\nIngrese codigo del libro","Error, codigo invalido",0,9);
                indice=buscarLibro(vecLibros,tamLibros,auxCodigoLib);
                if(vecLibros[indice].isEmpty!=1)
                    {
                        printf("\nError,No se encuentra su codigo de libro\n");

                    }
                    else
                    {

                            printf("\n ID PRES  COD SOC  ID LIBRO  FECHA \n");

                            for(i=0; i < tamPrestamos; i++)
                            {
                                if(vecPrestamos[i].isEmpty == 1 && vecPrestamos[i].idCodigoLibro ==auxCodigoLib)
                                {
                                    mostrarPrestamo(vecPrestamos,i);
                                    contador++;

                                }

                            }
                            printf("Este LIBRO tiene %d prestamo/s",contador);



                    }

                    if(contador==0)
                        {
                            printf("\nEste libro no tiene prestamos");
                        }

}
/////////////////////////////////////////////////////////////////////////////////////////
void mostrarPrestamosDeUnaFecha(eLibros vecLibros[],int tamLibros,ePrestamos vecPrestamos[],int tamPrestamos)
{
    int contador = 0;
    int auxDia;
    int auxMes;
    int auxAnio;
    int indice;
    int i;
    eFecha auxFecha;
                getInt(&auxDia,"\nIngrese el dia","Error, dia invalido",1,31);

                getInt(&auxMes,"\nIngrese el mes","Error, mes invalido",1,12);
                getInt(&auxAnio,"\nIngrese el anio","Error, anio invalido",1900,2020);
                auxFecha.dia=auxDia;
                auxFecha.mes=auxMes;
                auxFecha.anio=auxAnio;





                            printf("\n ID PRES  COD SOC  ID LIBRO  FECHA \n");

                            for(i=0; i < tamPrestamos; i++)
                            {
                                if(vecPrestamos[i].isEmpty == 1 && vecPrestamos[i].fechaPrestamo.dia ==auxFecha.dia)
                                {
                                    if(vecPrestamos[i].fechaPrestamo.mes==auxFecha.mes)
                                        {
                                            if(vecPrestamos[i].fechaPrestamo.anio==auxFecha.anio)
                                                {

                                                    mostrarPrestamo(vecPrestamos,i);
                                                    printf("ID LIBRO ID AUTOR NOMBRE LIBRO\n");
                                                    mostrarLibro(vecLibros,i);

                                                    contador++;
                                        }
                                                }

                                }

                            }
                            printf("Esta fecha tiene %d prestamo/s",contador);






                    if(contador==0)
                        {
                            printf("\nEsta fecha no tiene prestamos");
                        }

}
/////////////////////////////////////////////////////////////////////////////////////////

void mostrarPrestamosDeUnaFechaSocios(eSocios vecSocios[],int tamSocios,ePrestamos vecPrestamos[],int tamPrestamos)
{
    int contador = 0;
    int auxDia;
    int auxMes;
    int auxAnio;
    int indice;
    eFecha auxFecha;
    int i;
                getInt(&auxDia,"\nIngrese el dia","Error, dia invalido",1,31);

                getInt(&auxMes,"\nIngrese el mes","Error, mes invalido",1,12);
                getInt(&auxAnio,"\nIngrese el anio","Error, anio invalido",1900,2020);
                auxFecha.dia=auxDia;
                auxFecha.mes=auxMes;
                auxFecha.anio=auxAnio;





                            printf("\n ID PRES  COD SOC  ID LIBRO  FECHA \n");

                            for(i=0; i < tamPrestamos; i++)
                            {
                                if(vecPrestamos[i].isEmpty == 1 && vecPrestamos[i].fechaPrestamo.dia ==auxFecha.dia)
                                {
                                    if(vecPrestamos[i].fechaPrestamo.mes==auxFecha.mes)
                                        {
                                            if(vecPrestamos[i].fechaPrestamo.anio==auxFecha.anio)
                                                {

                                                    mostrarPrestamo(vecPrestamos,i);
                                                    printf("\nCodigo\tApelli.\tNombre\tSexo\tTelefono\t\tEmail\tIngreso\t\n");
                                                    mostrarSocio(vecSocios,i);

                                                    contador++;
                                        }
                                                }

                                }

                            }
                            printf("Esta fecha tiene %d prestamo/s",contador);






                    if(contador==0)
                        {
                            printf("\nEsta fecha no tiene prestamos");
                        }

}
/////////////////////////////////////////////////////////////////////////////////////////
void ordenarLibrosTituloDes(eLibros vec[], int tamLibros)
{
    eLibros auxLib;
    int i,j;
    for(i=0; i<tamLibros-1; i++)
    {
        for(j=i+1; j<tamLibros; j++)
        {
            if(strcmp(vec[i].titulo, vec[j].titulo)<0)//si las cadenas son iguales retornara 0, si la primera es mayor retornara un valor positivo y si es menor retornara un valor negativo.
            {
                auxLib = vec[i];
                vec[i] = vec[j];
                vec[j] = auxLib;
            }
        }
    }
    printf("\n-- Libros ordenados exitosamente --\n\n");

}
//////////////////////////////////////////////////////////////////////////////////////////////////
void informarPromedioDiarioPrestamos(ePrestamos vecPrestamos[],int tamPrestamos)
{
    int contador=0;
    float promedio;
    eFecha auxFecha;
    int i;

            for(i=0;i<tamPrestamos;i++)
            {
                if(vecPrestamos[i].isEmpty==1)
                    {
                        contador++;
                        //contador=300; usado para simular prestamos
                    }
            }




        promedio=contador/31;

        printf("los libros prestados son %d",contador);
        printf("\n el promedio diario de libros es %.2f",promedio);
        printf("\n");

}
//////////////////////////////////////////////////////////////////////////////////////

