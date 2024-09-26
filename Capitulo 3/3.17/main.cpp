#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar para operaciones de entrada y salida.

/*
   N�meros perfectos.
   El programa recibe un n�mero entero positivo como l�mite, encuentra
   todos los n�meros perfectos entre 1 y ese l�mite, e imprime cu�ntos
   n�meros perfectos se han encontrado.
   Variables:
   I, J, NUM, SUM, C: enteras para contar, sumar y almacenar el n�mero l�mite.
*/

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int I, J, NUM, SUM, C = 0; // Se declaran variables enteras: I y J para los contadores, NUM para el l�mite, SUM para la suma de divisores, y C para contar los n�meros perfectos.

    printf("\nIngrese el n�mero l�mite: "); // Se solicita al usuario que ingrese un n�mero l�mite.
    scanf("%d", &NUM); // Se lee el n�mero ingresado y se almacena en NUM.

    // Se inicia un bucle que recorre cada n�mero desde 1 hasta el l�mite ingresado.
    for (I = 1; I <= NUM; I++)
    {
        SUM = 0; // Se inicializa la suma de divisores para el n�mero actual (I).

        // Se utiliza un bucle para encontrar todos los divisores de I, limit�ndose a la mitad de I.
        for (J = 1; J <= (I / 2); J++)
        {
            // Se verifica si J es un divisor de I.
            if ((I % J) == 0)
                SUM += J; // Si es un divisor, se suma a SUM.
        }

        // Se verifica si la suma de los divisores es igual al n�mero actual (I).
        if (SUM == I)
        {
            printf("\n%d es un n�mero perfecto", I); // Si es perfecto, se imprime el n�mero.
            C++; // Se incrementa el contador de n�meros perfectos.
        }
    }

    // Se imprime el total de n�meros perfectos encontrados en el intervalo.
    printf("\nEntre 1 y %d hay %d n�meros perfectos", NUM, C);
}
