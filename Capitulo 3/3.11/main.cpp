#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar para permitir operaciones de entrada y salida.

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; // Se declaran cinco variables enteras para contar la cantidad de calificaciones en diferentes rangos: R1, R2, R3, R4 y R5.
    float CAL; // Se declara una variable de tipo flotante para almacenar las calificaciones ingresadas.

    printf("Ingresa la calificaci�n del alumno: "); // Se solicita al usuario que ingrese la calificaci�n de un alumno.
    scanf("%f", &CAL); // Se lee la calificaci�n ingresada y se almacena en la variable CAL.

    while (CAL != -1) // Se inicia un bucle que continuar� mientras la calificaci�n ingresada no sea -1 (que indica el fin de la entrada).
    {
        if (CAL < 4) // Se verifica si la calificaci�n es menor que 4.
            R1++; // Si es as�, se incrementa el contador de R1 (calificaciones en el rango 0 a 3.99).
        else if (CAL < 6) // Se verifica si la calificaci�n es menor que 6.
            R2++; // Si es as�, se incrementa el contador de R2 (calificaciones en el rango 4 a 5.99).
        else if (CAL < 8) // Se verifica si la calificaci�n es menor que 8.
            R3++; // Si es as�, se incrementa el contador de R3 (calificaciones en el rango 6 a 7.99).
        else if (CAL < 9) // Se verifica si la calificaci�n es menor que 9.
            R4++; // Si es as�, se incrementa el contador de R4 (calificaciones en el rango 8 a 8.99).
        else // Si la calificaci�n no encaja en ninguno de los rangos anteriores, se asume que est� en el rango 9 a 10.
            R5++; // Se incrementa el contador de R5.

        printf("Ingresa la calificaci�n del alumno: "); // Se solicita al usuario que ingrese la siguiente calificaci�n.
        scanf("%f", &CAL); // Se lee la nueva calificaci�n y se almacena en CAL.
    }

    // Se imprimen los totales de cada rango de calificaciones.
    printf("\n0..3.99 = %d", R1); // Imprime la cantidad de calificaciones en el rango de 0 a 3.99.
    printf("\n4..5.99 = %d", R2); // Imprime la cantidad de calificaciones en el rango de 4 a 5.99.
    printf("\n6..7.99 = %d", R3); // Imprime la cantidad de calificaciones en el rango de 6 a 7.99.
    printf("\n8..8.99 = %d", R4); // Imprime la cantidad de calificaciones en el rango de 8 a 8.99.
    printf("\n9..10 = %d", R5); // Imprime la cantidad de calificaciones en el rango de 9 a 10.
}

