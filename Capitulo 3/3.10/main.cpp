#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar para realizar operaciones de entrada y salida.
#include <math.h>  // Se incluye la biblioteca matem�tica para utilizar funciones como pow().

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; // Se declaran variables enteras: I para contar, N para el n�mero de datos, NUM para almacenar cada n�mero ingresado, SPA para la suma de n�meros pares, SIM para la suma de n�meros impares y CIM para contar cu�ntos impares se han ingresado.

    printf("Ingrese el n�mero de datos que se van a procesar:\t"); // Se solicita al usuario que ingrese la cantidad de n�meros que se procesar�n.
    scanf("%d", &N); // Se lee el valor de N y se almacena en la variable correspondiente.

    if (N > 0) // Se verifica que N sea un n�mero positivo.
    {
        for (I = 1; I <= N; I++) // Se inicia un bucle que se repite N veces para procesar cada n�mero.
        {
            printf("\nIngrese el n�mero %d: ", I); // Se solicita al usuario que ingrese el n�mero actual.
            scanf("%d", &NUM); // Se lee el n�mero ingresado y se almacena en la variable NUM.

            if (NUM) // Se verifica que el n�mero ingresado no sea cero.
                if (pow(-1, NUM) > 0) // Se utiliza la funci�n pow() para determinar si el n�mero es par (resultado positivo).
                    SPA = SPA + NUM; // Si es par, se suma a SPA.
                else // Si el n�mero no es par, se ejecuta esta parte.
                {
                    SIM = SIM + NUM; // Se suma el n�mero impar a SIM.
                    CIM++; // Se incrementa el contador de n�meros impares.
                }
        }

        // Se imprime la suma de los n�meros pares acumulados.
        printf("\nLa suma de los n�meros pares es: %d", SPA);

        // Se calcula e imprime el promedio de los n�meros impares, asegur�ndose de que CIM no sea cero para evitar divisi�n por cero.
        if (CIM > 0)
            printf("\nEl promedio de n�meros impares es: %5.2f", (float)(SIM) / CIM);
        else
            printf("\nNo se ingresaron n�meros impares."); // Mensaje en caso de que no se hayan ingresado impares.
    }
    else // Si N no es positivo, se ejecuta esta parte.
        printf("\nEl valor de N es incorrecto"); // Se informa al usuario que el valor de N no es v�lido.
}
