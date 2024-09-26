#include <iostream>
#include <stdio.h> // Se incluye la biblioteca estándar para operaciones de entrada y salida.
#include <math.h>  // Se incluye la biblioteca matemática para usar funciones como fabs().

void main(void) // Función principal donde comienza la ejecución del programa.
{
    int I = 1, B = 0, C; // Se declaran variables enteras: I para el contador de términos, B para alternar entre suma y resta, y C para contar el número total de términos.
    double RES; // Se declara una variable de tipo doble para almacenar el resultado de la serie.

    RES = 4.0 / I; // Inicialmente, RES se establece en el primer término de la serie (4 / 1).
    C = 1; // Se inicializa el contador de términos en 1.

    // Se utiliza un bucle while que continuará hasta que la diferencia entre RES y 3.1415 sea menor o igual a 0.0005.
    while ((fabs(3.1415 - RES)) > 0.0005)
    {
        I += 2; // Se incrementa I en 2 para calcular el siguiente término de la serie.

        if (B) // Se verifica el valor de B para decidir si se suma o resta el siguiente término.
        {
            RES += (double)(4.0 / I); // Si B es 1, se suma el nuevo término a RES.
            B = 0; // Se establece B a 0 para la próxima iteración.
        }
        else // Si B es 0, se ejecuta esta parte.
        {
            RES -= (double)(4.0 / I); // Si B es 0, se resta el nuevo término de RES.
            B = 1; // Se establece B a 1 para la próxima iteración.
        }
        C++; // Se incrementa el contador de términos.
    }

    // Se imprime el número total de términos utilizados para alcanzar el resultado.
    printf("\nNúmero de términos: %d", C);
}
