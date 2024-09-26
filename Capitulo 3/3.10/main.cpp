#include <iostream>
#include <stdio.h> // Se incluye la biblioteca estándar para realizar operaciones de entrada y salida.
#include <math.h>  // Se incluye la biblioteca matemática para utilizar funciones como pow().

void main(void) // Función principal donde comienza la ejecución del programa.
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; // Se declaran variables enteras: I para contar, N para el número de datos, NUM para almacenar cada número ingresado, SPA para la suma de números pares, SIM para la suma de números impares y CIM para contar cuántos impares se han ingresado.

    printf("Ingrese el número de datos que se van a procesar:\t"); // Se solicita al usuario que ingrese la cantidad de números que se procesarán.
    scanf("%d", &N); // Se lee el valor de N y se almacena en la variable correspondiente.

    if (N > 0) // Se verifica que N sea un número positivo.
    {
        for (I = 1; I <= N; I++) // Se inicia un bucle que se repite N veces para procesar cada número.
        {
            printf("\nIngrese el número %d: ", I); // Se solicita al usuario que ingrese el número actual.
            scanf("%d", &NUM); // Se lee el número ingresado y se almacena en la variable NUM.

            if (NUM) // Se verifica que el número ingresado no sea cero.
                if (pow(-1, NUM) > 0) // Se utiliza la función pow() para determinar si el número es par (resultado positivo).
                    SPA = SPA + NUM; // Si es par, se suma a SPA.
                else // Si el número no es par, se ejecuta esta parte.
                {
                    SIM = SIM + NUM; // Se suma el número impar a SIM.
                    CIM++; // Se incrementa el contador de números impares.
                }
        }

        // Se imprime la suma de los números pares acumulados.
        printf("\nLa suma de los números pares es: %d", SPA);

        // Se calcula e imprime el promedio de los números impares, asegurándose de que CIM no sea cero para evitar división por cero.
        if (CIM > 0)
            printf("\nEl promedio de números impares es: %5.2f", (float)(SIM) / CIM);
        else
            printf("\nNo se ingresaron números impares."); // Mensaje en caso de que no se hayan ingresado impares.
    }
    else // Si N no es positivo, se ejecuta esta parte.
        printf("\nEl valor de N es incorrecto"); // Se informa al usuario que el valor de N no es válido.
}
