#include <iostream>

#include <stdio.h> // Incluye la biblioteca est�ndar para operaciones de entrada y salida.

void main(void) // Funci�n principal del programa, donde comienza la ejecuci�n.
{
    int I, N, NUM, SUM; // Declara variables enteras: I (contador), N (n�mero de datos), NUM (n�mero ingresado) y SUM (suma de positivos).
    SUM = 0; // Inicializa la variable SUM a 0 para acumular la suma de los n�meros positivos.

    printf("Ingrese el n�mero de datos:\t"); // Pide al usuario que ingrese cu�ntos n�meros va a introducir.
    scanf("%d", &N); // Lee el n�mero total de datos que el usuario quiere ingresar y lo almacena en N.

    for (I = 1; I <= N; I++) // Inicia un bucle que se repite N veces, una por cada n�mero que el usuario ingresa.
    {
        printf("Ingrese el dato n�mero %d:\t", I); // Pide al usuario que ingrese el dato n�mero I.
        scanf("%d", &NUM); // Lee el n�mero ingresado por el usuario y lo almacena en la variable NUM.

        if (NUM > 0) // Verifica si el n�mero ingresado es positivo.
            SUM = SUM + NUM; // Si es positivo, lo suma a la variable SUM.
    }

    printf("\nLa suma de los n�meros positivos es: %d", SUM); // Imprime el total acumulado de los n�meros positivos.
}
