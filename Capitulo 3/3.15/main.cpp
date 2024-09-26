#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar para operaciones de entrada y salida.
#include <math.h>  // Se incluye la biblioteca matem�tica para usar funciones como fabs().

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int I = 1, B = 0, C; // Se declaran variables enteras: I para el contador de t�rminos, B para alternar entre suma y resta, y C para contar el n�mero total de t�rminos.
    double RES; // Se declara una variable de tipo doble para almacenar el resultado de la serie.

    RES = 4.0 / I; // Inicialmente, RES se establece en el primer t�rmino de la serie (4 / 1).
    C = 1; // Se inicializa el contador de t�rminos en 1.

    // Se utiliza un bucle while que continuar� hasta que la diferencia entre RES y 3.1415 sea menor o igual a 0.0005.
    while ((fabs(3.1415 - RES)) > 0.0005)
    {
        I += 2; // Se incrementa I en 2 para calcular el siguiente t�rmino de la serie.

        if (B) // Se verifica el valor de B para decidir si se suma o resta el siguiente t�rmino.
        {
            RES += (double)(4.0 / I); // Si B es 1, se suma el nuevo t�rmino a RES.
            B = 0; // Se establece B a 0 para la pr�xima iteraci�n.
        }
        else // Si B es 0, se ejecuta esta parte.
        {
            RES -= (double)(4.0 / I); // Si B es 0, se resta el nuevo t�rmino de RES.
            B = 1; // Se establece B a 1 para la pr�xima iteraci�n.
        }
        C++; // Se incrementa el contador de t�rminos.
    }

    // Se imprime el n�mero total de t�rminos utilizados para alcanzar el resultado.
    printf("\nN�mero de t�rminos: %d", C);
}
