#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
typedef struct
{
    char nombre[31];
    int edad;
    int dni;
}ePersona

int loadPerson(struct S_Person* pPerson);

