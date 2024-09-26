#include <stdio.h> // Incluye la biblioteca est�ndar para operaciones de entrada y salida.

void main(void) // Funci�n principal del programa, donde comienza la ejecuci�n.
{

    int I; // Declara una variable entera I para usar como contador en el bucle.
    float SAL, NOM; // Declara variables SAL (salario) y NOM (n�mina) de tipo flotante.
    NOM = 0; // Inicializa la variable NOM a 0 para acumular el total de salarios.

    for (I=1; I<=15; I++) // Inicia un bucle que itera 15 veces, una por cada profesor.
    {
        printf("Ingrese el salario del profesor %d:\t", I); // Muestra un mensaje pidiendo el salario del profesor actual.
        scanf("%f", &SAL); // Lee el salario ingresado por el usuario y lo almacena en la variable SAL.
        NOM = NOM + SAL; // Suma el salario ingresado a la variable NOM para acumular el total.
    }

    printf("\nEl total de la n�mina es: %.2f", NOM); // Imprime el total acumulado de la n�mina con dos decimales.
}

