
typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int dni;
    int isEmpty;
}ePersona;

typedef struct
    {
       int dia;
       int mes;
       int anio;

    }fecha;

    typedef struct
    {
        char apellido[31];
        char nombre[31];
       char sexo;
       fecha fechaNac;

    }persona;


void alta( ePersona pers[], int cantidad );

void mostrarUno( ePersona per );

void mostrarTodos( ePersona pers[], int cantidad );

void ordenar(ePersona pers[], int cantidad);

void init(ePersona pers[],int cantidad);
