#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar que permite realizar operaciones de entrada y salida de datos.
#include <math.h>  // Se incluye la biblioteca matem�tica, que proporciona funciones como pow() para c�lculos de potencias.

void main(void) // Esta es la funci�n principal donde comienza la ejecuci�n del programa.
{
    int NUM; // Se declara una variable de tipo entero para almacenar el n�mero que el usuario ingresar�.
    long CUA, SUC = 0; // Se declaran dos variables de tipo long: CUA para almacenar el cuadrado del n�mero y SUC para acumular la suma de todos los cuadrados, inicializ�ndola en 0.

    printf("\nIngrese un n�mero entero -0 para terminar-:\t"); // Se solicita al usuario que ingrese un n�mero entero, indicando que puede ingresar 0 para finalizar.
    scanf("%d", &NUM); // Se lee el valor ingresado por el usuario y se guarda en la variable NUM.

    while (NUM) // Se inicia un bucle que seguir� ejecut�ndose mientras el valor de NUM sea distinto de cero.
    {
        CUA = pow(NUM, 2); // Se calcula el cuadrado del n�mero utilizando la funci�n pow() y se almacena el resultado en CUA.
        printf("%d al cuadrado es %ld", NUM, CUA); // Se muestra en pantalla el n�mero ingresado junto con su cuadrado.

        SUC = SUC + CUA; // Se a�ade el cuadrado calculado a la suma total de cuadrados acumulados en SUC.

        printf("\nIngrese un n�mero entero -0 para terminar-:\t"); // Se pide al usuario que ingrese otro n�mero entero, reiterando que puede ingresar 0 para detener el proceso.
        scanf("%d", &NUM); // Se lee el nuevo n�mero proporcionado por el usuario y se almacena nuevamente en NUM.
    }

    printf("\nLa suma de los cuadrados es %ld", SUC); // Se imprime en pantalla el total acumulado de los cuadrados calculados durante la ejecuci�n del programa.
}
