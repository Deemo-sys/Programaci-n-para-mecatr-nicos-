#include <iostream>

#include <stdio.h> // Se incluye la biblioteca est�ndar para realizar operaciones de entrada y salida.

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int I, PRI = 0, SEG = 1, SIG; // Se declaran variables enteras: I para el contador, PRI para el primer n�mero de Fibonacci, SEG para el segundo n�mero, y SIG para el siguiente n�mero en la secuencia.

    // Se imprimen los dos primeros n�meros de Fibonacci.
    printf("\t %d \t %d", PRI, SEG); // Imprime los valores iniciales de la secuencia (0 y 1).

    // Se inicia un bucle que generar� los n�meros de Fibonacci desde el tercero hasta el quincuag�simo.
    for (I = 3; I <= 50; I++) // El bucle comienza en 3 y se repite hasta 50.
    {
        SIG = PRI + SEG; // Se calcula el siguiente n�mero en la secuencia sumando los dos anteriores.
        PRI = SEG; // Se actualiza PRI al valor de SEG (el segundo n�mero se convierte en el primero).
        SEG = SIG; // Se actualiza SEG al valor de SIG (el nuevo n�mero se convierte en el segundo).

        printf("\t %d", SIG); // Se imprime el siguiente n�mero de Fibonacci calculado.
    }
}
