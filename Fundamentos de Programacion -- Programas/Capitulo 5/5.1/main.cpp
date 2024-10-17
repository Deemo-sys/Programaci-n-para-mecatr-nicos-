#include <stdio.h>

// Pregunta al usuario c�mo desea un arreglo unidimensional de tipo entero y en el arreglo, determina cu�ntas veces se encuentra el n�mero uno en n�mero entero.
int main(void)
{
    int NUM, CUE = 0;
    int ARREGLO[100]; // Declaraci�n del arreglo
    printf("Ingrese el tama�o del ARREGLO: ");
    scanf("%d", &NUM);

    for (int I=0; I<NUM; I++)
    {
        printf("\nIngrese el elemento %d del ARREGLO: ", I+1);
        scanf("%d", &ARREGLO[I]); // Se lee la asignaci�n en el arreglo
    }

    printf("\n%d", NUM);

    for (int I=0; I<NUM; I++) // Comparaci�n del n�mero con los elementos del ARREGLO
        if (ARREGLO[I] == NUM) CUE++;

    printf("\nEl n�mero se encuentra %d veces en el ARREGLO.", CUE); // Resultado de la b�squeda
}
