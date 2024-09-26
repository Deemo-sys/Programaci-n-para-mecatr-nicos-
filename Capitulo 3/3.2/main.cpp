#include <iostream>

#include <stdio.h> // Incluye la biblioteca estándar para operaciones de entrada y salida.

void main(void) // Función principal del programa, donde comienza la ejecución.
{
    int I, N, NUM, SUM; // Declara variables enteras: I (contador), N (número de datos), NUM (número ingresado) y SUM (suma de positivos).
    SUM = 0; // Inicializa la variable SUM a 0 para acumular la suma de los números positivos.

    printf("Ingrese el número de datos:\t"); // Pide al usuario que ingrese cuántos números va a introducir.
    scanf("%d", &N); // Lee el número total de datos que el usuario quiere ingresar y lo almacena en N.

    for (I = 1; I <= N; I++) // Inicia un bucle que se repite N veces, una por cada número que el usuario ingresa.
    {
        printf("Ingrese el dato número %d:\t", I); // Pide al usuario que ingrese el dato número I.
        scanf("%d", &NUM); // Lee el número ingresado por el usuario y lo almacena en la variable NUM.

        if (NUM > 0) // Verifica si el número ingresado es positivo.
            SUM = SUM + NUM; // Si es positivo, lo suma a la variable SUM.
    }

    printf("\nLa suma de los números positivos es: %d", SUM); // Imprime el total acumulado de los números positivos.
}
