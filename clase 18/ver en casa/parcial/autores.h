#ifndef autores_H_INCLUIDA//Para evitar que el compilador tire error por incluir varias veces la misma biblioteca del usuario.
#define autores_H_INCLUIDA
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <conio.h>
#include <ctype.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;


typedef struct
{
    int codigoAutor;
    char apellido[31];
    char nombre[31];

    int isEmpty;

} eAutores;

typedef struct
{
    int codigoLibro;
    char titulo[51];
    int idCodigoAutor;
    int isEmpty;

} eLibros;


typedef struct
{
    int codigoSocio;
    char apellido[31];
    char nombre[31];
    char sexo;
    long int telefono;
    char eMail[31];
    eFecha fechaAsociado;

    int isEmpty;

} eSocios;


typedef struct
{
    int codigoPrestamo;
    int idCodigoLibro;
    int idCodigoSocio;
    eFecha fechaPrestamo;
    int isEmpty;

} ePrestamos;

/** \brief Function: Muestra el menu por pantalla y captura la opcion seleccionada.
*   \param Request: NULL.
*   \return Returns: Opcion elegida.
*/
char menuSocios();
/** \brief Function: Muestra el menu por pantalla y captura la opcion seleccionada.
*   \param Request: NULL.
*   \return Returns: Opcion elegida.
*/
int subMenuModificar();
/** \brief Function: Inicializa la estructura seleccionada en 0.
*   \param Request: Array vec de la estructura eSocios.
*   \param Request: Int tam tamaño maximo de la estructura eSocios.
*   \return Returns: NULL.
*/
void inicializarSocios(eSocios vec[], int tam);
/** \brief Function: Inicializa la estructura seleccionada en 0.
*   \param Request: Array vecPrestamos de la estructura ePrestamos.
*   \param Request: Int tamPrestamos el tamaño maximo de la estructura ePrestamos.
*   \return Returns: NULL.
*/
void inicializarPrestamos(ePrestamos vecPrestamos[], int tamPrestamos);
/** \brief Function: Inicializa y copia lo que esta hardcodeado en los vec de las estructuras correspondientes.
 *
 * \param Request: Array vec de la estructura de eSocios.
 * \param Request: Int tam tamaño maximo de la estructura eSocios.
 * \param Request: Array vecAutores de la estructura eAutores.
 * \param Request: Int tamAutores tamaño maximo de la estructura eAutores.
 * \param Request: Array vecLibros de la estructura eLibros.
 * \param Request: Int tamLibros tamaño maximo de la estructura eLibros.
 * \param Request: Array vecPrestamos de la estructura ePrestamos.
 * \param Request: Int tamPrestamos tamaño maximo de la estructura ePrestamos.
 * \return Returns: NULL.
 *
 */
void inicializacion(eSocios vec[], int tam, eAutores vecAutores[], int tamAutores, eLibros vecLibros[], int tamLibros,ePrestamos vecPrestamos[],int tamPrestamos);
/** \brief Function: Obtiene el primer indice libre del array vecSocios de la estructura eSocios.
 *  \param Request: Array vecSocios de la estructura eSocios.
 *  \param Request: Int tamSocios tamaño maximo de la estructura eSocios.
 * \return Returns: Si no hay ocurrencia (-1) y si la hay, la posición de la misma.
 *
 */
int buscarLibre(eSocios vecSocios[], int tamSocios);
/** \brief Function: Obtiene el indice que coincide con el ID pasado por parametro.
 *  \param Request: Array vecSocios de la estructura eSocios.
 *  \param Request: Int tamSocios maximo de la estructura eSocios.
 *  \param Request: Int codigoSocio a ser buscado en el array de la estructura eSocios.
 *  \return Returns: el indice en donde se encuentra el elemento que coincide con el parametro codigoSocio o (-1) si no lo encuentra.
 */
int buscarSocio(eSocios vecSocios[], int tamSocios, int codigoSocio);
/** \brief Function: Compara si el codigoAutor (eAutores) es igual al codigoAutor y copia la descripcion.
 *
 * \param Request: Array vecAutor de la estructura eAutores.
 * \param Request: Int tamAutores tamaño maximo de la estructura eAutores.
 * \param Request: Int codigoAutor es un elemento entero para comparar con el elemento id de la estructura eAutores.
 * \param Request: Char descMostrar es un array donde se copiara la descripcion de el elemento desc de la estructura eAutores.
 * \return Returns: NULL.
 *
 */
void obtenerAutor(eAutores vecAutores[], int tamAutores, int codigoAutor, char descMostrar[]);
/** \brief Function: Compara si el codigoLibro (eLibros) es igual al codigoLibro y copia la descripcion.
 *
 * \param Request: Array vecLibros de la estructura eLibros.
 * \param Request: Int tamLibros tamaño maximo de la estructura eLibros.
 * \param Request: Int codigoLibro es un elemento entero para comparar con el elemento codigo libro de la estructura eLibros.
 * \param Request: Char descMostrar es un array donde se copiara la descripcion de el elemento titulo libro de la estructura eLibros.
 * \return Returns: NULL.
 *
 */
void obtenerLibro(eLibros vecLibros[], int tamLibros, int codigoLibro, char descMostrar[]);
/** \brief Function: muestra un socio si este esta dado de alta.
 * \param Request: Array listaSocios de la estructura eSocios.
 * \param Request: Int i indice de la estructura eSocios.
 * \return Returns: NULL.
 *
 */
void mostrarSocio(eSocios listaSocios[], int i);
/** \brief Function: muestra todos los socios que esten dados de alta.
 * \param Request: Array vec de la estructura eSocios.
 * \param Request: Int tam tamaño maximo de la estructura eSocios.
 * \return Returns: NULL.
 *
 */
void mostrarSocios(eSocios vec[], int tam);
/** \brief Function: muestra un libro si este esta dado de alta.
 * \param Request: Array listaLibros de la estructura eLibros.
 * \param Request: Int i indice de la estructura eLibros.
 * \return Returns: NULL.
 *
 */
void mostrarLibro(eLibros vecLibros[], int i);
/** \brief Function: Asigna datos validados a un socio incremental dentro del array vec
 *
 * \param Request: Array vec de la estructura eSocio.
 * \param Request: Int tam valor maximo de la estructura eSocio.
 * \param Request: Int codigoMain valor autoincremental de la funcion Main.
 * \return Returns: Int altaOk (1) si se logro hacer el alta o (0) si no se logro el alta.
 *
 */
int altaSocio(eSocios vec[], int tam, int codigoMain);
/** \brief Function: Modifica datos validados a un socio elegido dentro del array vec
 *
 * \param Request: Array vec de la estructura eSocios.
 * \param Function: Int tam valor maximo de la estructura eSocios.
 * \return Returns: NULL.
 *
 */
void modificarSocio(eSocios vec[], int tam);
/** \brief Function: Asigna a un socio incremental dentro del array vec.isEmpty(-1).
 *
 * \param Request: Array vec de la estructura eSocios.
 * \param Request: Int tam valor maximo de la estructura eSocios.
 * \return Returns: NULL.
 *
 */
void bajaSocio(eSocios vec[], int tam);
/** \brief Function: Ordena los apellidos de A-Z.
 *  \param  Request: Array vec de la estructura eSocios.
 *  \param  Request: Int tam el tamaño maximo de la estructura eSocios.
 *  \return Returns: NULL.
 */
void ordenarSociosApellido(eSocios vec[], int tam);
/** \brief Function: muestra todos los libros que esten dados de alta.
 * \param Request: Array vecLibros de la estructura eLibros.
 * \param Request: Int tamLibros tamaño maximo de la estructura eLibros.
 * \return Returns: NULL.
 *
 */
void mostrarLibros(eLibros vecLibros[], int tamLibros);
/** \brief Function: muestra todos los autores que esten dados de alta.
 * \param Request: Array vecAutores de la estructura eAutores.
 * \param Request: Int tamAutores tamaño maximo de la estructura eAutores.
 * \return Returns: NULL.
 *
 */
void mostrarAutores(eAutores vecAutores[], int tamAutores);
/** \brief Function: Asigna datos validados a un prestamo incremental dentro del array vecPrestamo.
 *
 * \param Request: Array vecPrestamos de la estructura ePrestamos.
 * \param Request: Int tamPrestamos tamaño maximo de la estructura ePrestamos.
 * \param Request: Array vecSocios de la estructura eSocios.
 * \param Request: Int tam valor maximo de la estructura eSocios.
 * \param Request: Array vecAutor de la estructura eAutores.
 * \param Request: Int tamAutores valor maximo de la estructura eAutores.
 * \param Request: Int codigoMain valor autoincremental de la funcion Main.
 * \param Request: Array vecLibrs de la estructura eLbros.
 * \param Request: Int tamLibros valor maximo de la estructura eLibros.
 * \return Returns: Int altaOk (1) si se logro hacer el alta o (0) si no se logro el alta.
 *
 */
int altaPrestamos(ePrestamos vecPrestamos[],int tamPrestamos,eSocios vecSocios[], int tam,eAutores vecAutor[],int tamAutor, int codigoMain,eLibros vecLibros[],int tamLibros);
/** \brief Function: Obtiene el primer indice libre del array vecPrestamos de la estructura ePrestamos.
 *  \param Request: Array vecPrestamos de la estructura ePrestamos.
 *  \param Request: Int tamPrestamos tamaño maximo de la estructura ePrestamos.
 * \return Returns: Si no hay ocurrencia (-1) y si la hay, la posición de la misma.
 *
 */
int buscarLibrePrestamos(ePrestamos vecPrestamos[], int tamPrestamos);
/** \brief Function: muestra un prestamo si este esta dado de alta.
 *
 * \param Request: Array vecPrestamos de la estructura ePrestamos.
 * \param Request: Int i indice de la estructura ePrestamos.
 * \return Returns: NULL.
 *
 */
void mostrarPrestamo(ePrestamos vecPrestamos[],int i);
/** \brief Function: muestra todos los prstamos si estan dados de alta.
 *
 * \param Request: Array vecPrestamos de la estructura ePrestamos.
 * \param Request: Int tamPrestamos tamaño maximo de la estructura ePrestamos.
 * \return Returns: NULL.
 *
 */
void mostrarPrestamos(ePrestamos vecPrestamos[], int tamPrestamos);

void informarLibroMenosPrestado (eSocios vecSocios[], int tamSocios, eLibros vecLibros[],int tamLibros, ePrestamos vecPrestamos[], int tamPrestamos);
void mostrarPrestamosDeUnSocio(eSocios vecSocios[],int tamSocios[],ePrestamos vecPrestamos[],int tamPrestamos);
int buscarLibro(eLibros vecLibros[], int tamLibros, int codigoLibro);
void informarSocioConMasPrestamos (eSocios vecSocios[], int tamSocios, ePrestamos vecPrestamos[], int tamPrestamos);
void mostrarPrestamosDeUnLibro(eLibros vecLibros[],int tamLibros,ePrestamos vecPrestamos[],int tamPrestamos);
void mostrarPrestamosDeUnaFecha(eLibros vecLibros[],int tamLibros,ePrestamos vecPrestamos[],int tamPrestamos);
void mostrarPrestamosDeUnaFechaSocios(eSocios vecSocios[],int tamSocios,ePrestamos vecPrestamos[],int tamPrestamos);
void ordenarLibrosTituloDes(eLibros vec[], int tamLibros);


#endif
