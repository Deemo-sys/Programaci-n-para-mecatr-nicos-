#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar para realizar operaciones de entrada y salida.



void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int I, MAT, MAMAT, MEMAT; // Se declaran variables enteras: I para el contador, MAT para la matr�cula actual, MAMAT para la matr�cula del mejor promedio, y MEMAT para la matr�cula del peor promedio.
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; // Se declaran variables de tipo flotante para almacenar la suma de calificaciones, el promedio, la calificaci�n actual, el mejor promedio y el peor promedio.

    printf("Ingrese la matr�cula del primer alumno:\t"); // Se solicita al usuario que ingrese la matr�cula del primer alumno.
    scanf("%d", &MAT); // Se lee la matr�cula ingresada.

    while (MAT) // Se inicia un bucle que continuar� mientras la matr�cula ingresada no sea cero.
    {
        SUM = 0; // Se inicializa la suma de calificaciones para el nuevo alumno.

        // Se usa un bucle for para ingresar las 5 calificaciones del alumno.
        for (I = 1; I <= 5; I++) // El bucle se repite 5 veces para obtener todas las calificaciones.
        {
            printf("\tIngrese la calificaci�n del alumno: "); // Se solicita la calificaci�n del alumno.
            scanf("%f", &CAL); // Se lee la calificaci�n ingresada.
            SUM += CAL; // Se acumula la calificaci�n en SUM.
        }

        PRO = SUM / 5; // Se calcula el promedio dividiendo la suma de las calificaciones entre 5.
        printf("\nMatr�cula:%d\tPromedio:%5.2f", MAT, PRO); // Se imprime la matr�cula y el promedio del alumno.

        // Se verifica si el promedio actual es mayor que el mejor promedio encontrado hasta ahora.
        if (PRO > MAPRO)
        {
            MAPRO = PRO; // Se actualiza el mejor promedio.
            MAMAT = MAT; // Se actualiza la matr�cula del alumno con el mejor promedio.
        }

        // Se verifica si el promedio actual es menor que el peor promedio encontrado hasta ahora.
        if (PRO < MEPRO)
        {
            MEPRO = PRO; // Se actualiza el peor promedio.
            MEMAT = MAT; // Se actualiza la matr�cula del alumno con el peor promedio.
        }

        printf("\n\nIngrese la matr�cula del siguiente alumno: "); // Se solicita la matr�cula del siguiente alumno.
        scanf("%d", &MAT); // Se lee la nueva matr�cula.
    }

    // Se imprimen los resultados finales con la matr�cula y el promedio del mejor y peor alumno.
    printf("\n\nAlumno con mejor Promedio:\t%d\t%5.2f", MAMAT, MAPRO);
    printf("\n\nAlumno con peor Promedio:\t%d\t%5.2f", MEMAT, MEPRO);
}
