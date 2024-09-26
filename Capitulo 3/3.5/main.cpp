#include <iostream>
#include <stdio.h> // Se incluye la biblioteca estándar para permitir la entrada y salida de datos.

void main(void) // Esta es la función principal donde se inicia la ejecución del programa.
{
    float PAG, SPA = 0; // Se declaran dos variables de tipo flotante: PAG para almacenar el monto de cada pago y SPA para acumular la suma total, inicializándola en 0.

    printf("Ingrese el primer pago:\t"); // Se solicita al usuario que ingrese el primer pago.
    scanf("%f", &PAG); // Se lee el pago ingresado y se guarda en la variable PAG.

    /* La estructura do-while garantiza que al menos se registre un pago,
       incluso si es cero, ya que la condición se evalúa después de la ejecución. */
    do
    {
        SPA = SPA + PAG; // Se suma el monto del pago actual a la variable SPA, acumulando así el total de los pagos.

        printf("Ingrese el siguiente pago -0 para terminar-:\t "); // Se pide al usuario que ingrese el siguiente pago, indicando que puede ingresar 0 para finalizar.
        scanf("%f", &PAG); // Se lee el nuevo pago ingresado y se almacena en PAG.
    }
    while (PAG); // El bucle continuará ejecutándose mientras el pago ingresado sea diferente de cero.

    printf("\nEl total de pagos del mes es: %.2f", SPA); // Se muestra en pantalla el total acumulado de los pagos realizados durante el mes, formateado a dos decimales.
}
