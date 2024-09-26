#include <iostream>
#include <stdio.h> // Se incluye la biblioteca estándar para realizar operaciones de entrada y salida.

void main(void) // Función principal donde comienza la ejecución del programa.
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO; // Se declaran variables enteras: VOT para almacenar el voto actual, C1 a C5 para contar los votos de cada candidato, NU para los votos nulos y SVO para el total de votos.
    float PO1, PO2, PO3, PO4, PO5, PON; // Se declaran variables flotantes para almacenar los porcentajes de votos de cada candidato y de los votos nulos.

    printf("Ingrese el primer voto: "); // Se solicita al usuario que ingrese el primer voto.
    scanf("%d", &VOT); // Se lee el voto ingresado y se almacena en la variable VOT.

    while (VOT) // Se inicia un bucle que continuará mientras el voto ingresado no sea cero.
    {
        switch(VOT) // Se evalúa el voto ingresado para determinar a qué candidato pertenece.
        {
            case 1: C1++; break; // Si el voto es 1, se incrementa el contador de C1.
            case 2: C2++; break; // Si el voto es 2, se incrementa el contador de C2.
            case 3: C3++; break; // Si el voto es 3, se incrementa el contador de C3.
            case 4: C4++; break; // Si el voto es 4, se incrementa el contador de C4.
            case 5: C5++; break; // Si el voto es 5, se incrementa el contador de C5.
            default: NU++; break; // Para cualquier otro valor, se incrementa el contador de votos nulos (NU).
        }

        printf("Ingrese el siguiente voto –0 para terminar–: "); // Se solicita al usuario que ingrese el siguiente voto, indicando que puede ingresar 0 para terminar.
        scanf("%d", &VOT); // Se lee el nuevo voto ingresado.
    }

    // Se calcula el total de votos sumando los votos de cada candidato y los nulos.
    SVO = C1 + C2 + C3 + C4 + C5 + NU;

    // Se calculan los porcentajes de votos de cada candidato y los nulos.
    PO1 = ((float) C1 / SVO) * 100; // Porcentaje de votos para el candidato 1.
    PO2 = ((float) C2 / SVO) * 100; // Porcentaje de votos para el candidato 2.
    PO3 = ((float) C3 / SVO) * 100; // Porcentaje de votos para el candidato 3.
    PO4 = ((float) C4 / SVO) * 100; // Porcentaje de votos para el candidato 4.
    PO5 = ((float) C5 / SVO) * 100; // Porcentaje de votos para el candidato 5.
    PON = ((float) NU / SVO) * 100; // Porcentaje de votos nulos.

    // Se imprimen los resultados finales, incluyendo el total de votos y el porcentaje de cada candidato.
    printf("\nTotal de votos: %d", SVO);
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON); // Se imprime el total de votos nulos y su porcentaje.
}
