#include <stdio.h>

/*Promedio del curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobado si es mayor a 6.

PRO: Variable de tipo real. */

void main(void);

{
    float PRO;
    printf("ingrese el promedio del alumno:");
    scanf("%f",&PRO);
    if(PRO >= 6)
        printf("\nAprobado");

        return 0;

}