#include <stdio.h>

// Pregunta al usuario cómo desea un arreglo unidimensional de tipo entero y en el arreglo, determina cuántas veces se encuentra el número uno en número entero.
int main(void)
{
    int NUM, CUE = 0;
    int ARREGLO[100]; // Declaración del arreglo
    printf("Ingrese el tamaño del ARREGLO: ");
    scanf("%d", &NUM);

    for (int I=0; I<NUM; I++)
    {
        printf("\nIngrese el elemento %d del ARREGLO: ", I+1);
        scanf("%d", &ARREGLO[I]); // Se lee la asignación en el arreglo
    }

    printf("\n%d", NUM);

    for (int I=0; I<NUM; I++) // Comparación del número con los elementos del ARREGLO
        if (ARREGLO[I] == NUM) CUE++;

    printf("\nEl número se encuentra %d veces en el ARREGLO.", CUE); // Resultado de la búsqueda
}
