#include <iostream>
#include <stdio.h> // Se incluye la biblioteca estándar para operaciones de entrada y salida.

/*
   Números perfectos.
   El programa recibe un número entero positivo como límite, encuentra
   todos los números perfectos entre 1 y ese límite, e imprime cuántos
   números perfectos se han encontrado.
   Variables:
   I, J, NUM, SUM, C: enteras para contar, sumar y almacenar el número límite.
*/

void main(void) // Función principal donde comienza la ejecución del programa.
{
    int I, J, NUM, SUM, C = 0; // Se declaran variables enteras: I y J para los contadores, NUM para el límite, SUM para la suma de divisores, y C para contar los números perfectos.

    printf("\nIngrese el número límite: "); // Se solicita al usuario que ingrese un número límite.
    scanf("%d", &NUM); // Se lee el número ingresado y se almacena en NUM.

    // Se inicia un bucle que recorre cada número desde 1 hasta el límite ingresado.
    for (I = 1; I <= NUM; I++)
    {
        SUM = 0; // Se inicializa la suma de divisores para el número actual (I).

        // Se utiliza un bucle para encontrar todos los divisores de I, limitándose a la mitad de I.
        for (J = 1; J <= (I / 2); J++)
        {
            // Se verifica si J es un divisor de I.
            if ((I % J) == 0)
                SUM += J; // Si es un divisor, se suma a SUM.
        }

        // Se verifica si la suma de los divisores es igual al número actual (I).
        if (SUM == I)
        {
            printf("\n%d es un número perfecto", I); // Si es perfecto, se imprime el número.
            C++; // Se incrementa el contador de números perfectos.
        }
    }

    // Se imprime el total de números perfectos encontrados en el intervalo.
    printf("\nEntre 1 y %d hay %d números perfectos", NUM, C);
}
