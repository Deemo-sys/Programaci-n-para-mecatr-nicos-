#include <iostream>

#include <stdio.h> // Se incluye la biblioteca estándar para realizar operaciones de entrada y salida.

void main(void) // Función principal donde comienza la ejecución del programa.
{
    int I, PRI = 0, SEG = 1, SIG; // Se declaran variables enteras: I para el contador, PRI para el primer número de Fibonacci, SEG para el segundo número, y SIG para el siguiente número en la secuencia.

    // Se imprimen los dos primeros números de Fibonacci.
    printf("\t %d \t %d", PRI, SEG); // Imprime los valores iniciales de la secuencia (0 y 1).

    // Se inicia un bucle que generará los números de Fibonacci desde el tercero hasta el quincuagésimo.
    for (I = 3; I <= 50; I++) // El bucle comienza en 3 y se repite hasta 50.
    {
        SIG = PRI + SEG; // Se calcula el siguiente número en la secuencia sumando los dos anteriores.
        PRI = SEG; // Se actualiza PRI al valor de SEG (el segundo número se convierte en el primero).
        SEG = SIG; // Se actualiza SEG al valor de SIG (el nuevo número se convierte en el segundo).

        printf("\t %d", SIG); // Se imprime el siguiente número de Fibonacci calculado.
    }
}
