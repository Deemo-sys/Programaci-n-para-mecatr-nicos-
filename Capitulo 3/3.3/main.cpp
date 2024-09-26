#include <iostream>

#include <stdio.h> // Incluye la biblioteca est�ndar para operaciones de entrada y salida.

void main(void) // Funci�n principal del programa, donde comienza la ejecuci�n.
{
    float PAG, SPA; // Declara variables de tipo flotante: PAG (pago actual) y SPA (suma de pagos).
    SPA = 0; // Inicializa la variable SPA a 0 para acumular la suma de los pagos.

    printf("Ingrese el primer pago:\t"); // Pide al usuario que ingrese el primer pago.
    scanf("%f", &PAG); // Lee el primer pago ingresado por el usuario y lo almacena en la variable PAG.

    while (PAG) // Inicia un bucle que continuar� mientras PAG sea diferente de cero.
    {
        SPA = SPA + PAG; // Suma el pago actual a la variable SPA.

        printf("Ingrese el siguiente pago:\t "); // Pide al usuario que ingrese el siguiente pago.
        scanf("%f", &PAG); // Lee el siguiente pago ingresado por el usuario y lo almacena en la variable PAG.
        /* Observa que la proposici�n que modifica la condici�n es una lectura, lo que permite que el bucle
           se detenga si el usuario ingresa 0. */
    }

    printf("\nEl total de pagos del mes es: %.2f", SPA); // Imprime el total acumulado de los pagos con dos decimales.
}
