#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar para permitir la entrada y salida de datos.

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int I = 2, CAM = 1; // Se declaran dos variables enteras: I inicia en 2 (primer t�rmino de la serie) y CAM se utiliza para alternar entre dos incrementos.
    long SSE = 0; // Se declara una variable de tipo long para acumular la suma de los t�rminos de la serie, inicializ�ndola en 0.

    while (I <= 2500) // Se inicia un bucle que continuar� mientras I sea menor o igual a 2500.
    {
        SSE = SSE + I; // Se suma el valor actual de I a la suma total de la serie, almacenada en SSE.
        printf("\t %d", I); // Se imprime el valor actual de I.

        if (CAM) // Se verifica el valor de CAM para decidir c�mo incrementar I.
        {
            I += 5; // Si CAM es verdadero (1), se incrementa I en 5.
            CAM--; // Se decrementa CAM a 0 para cambiar el comportamiento en la pr�xima iteraci�n.
        }
        else // Si CAM es falso (0), se ejecuta esta parte.
        {
            I += 3; // Se incrementa I en 3.
            CAM++; // Se incrementa CAM a 1 para volver al comportamiento anterior en la siguiente iteraci�n.
        }
    }

    // Se imprime la suma total de la serie al finalizar el bucle.
    printf("\nLa suma de la serie es: %ld", SSE);
}
