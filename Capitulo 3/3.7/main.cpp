#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar para realizar operaciones de entrada y salida.

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int I = 0; // Se declara una variable entera I para contar el n�mero de salarios ingresados, inicializ�ndola en 0.
    float SAL, PRO, NOM = 0; // Se declaran tres variables de tipo flotante: SAL para almacenar el salario de cada profesor, NOM para acumular la n�mina total y PRO para calcular el promedio, inicializando NOM en 0.

    printf("Ingrese el salario del profesor:\t"); // Se solicita al usuario que ingrese el salario de un profesor.

    /* Es importante ingresar al menos un salario para evitar errores en la ejecuci�n del programa. */
    scanf("%f", &SAL); // Se lee el salario ingresado y se almacena en la variable SAL.

    do // Se inicia un bucle do-while para asegurarse de que se procese al menos un salario.
    {
        NOM = NOM + SAL; // Se suma el salario actual a la n�mina total acumulada.
        I = I + 1; // Se incrementa el contador de salarios ingresados.

        printf("Ingrese el salario del profesor -0 para terminar- :\t"); // Se pide al usuario que ingrese el siguiente salario, indicando que puede ingresar 0 para finalizar.
        scanf("%f", &SAL); // Se lee el siguiente salario ingresado y se almacena en SAL.
    }
    while (SAL); // El bucle continuar� mientras el salario ingresado sea distinto de cero.

    PRO = NOM / I; // Se calcula el promedio de salarios dividiendo la n�mina total entre el n�mero de salarios ingresados.

    // Se imprime la n�mina total y el promedio de salarios, ambos formateados a dos decimales.
    printf("\nN�mina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
}
