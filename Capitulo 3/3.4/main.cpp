#include <iostream>
#include <stdio.h> // Se incluye la biblioteca estándar que permite realizar operaciones de entrada y salida de datos.
#include <math.h>  // Se incluye la biblioteca matemática, que proporciona funciones como pow() para cálculos de potencias.

void main(void) // Esta es la función principal donde comienza la ejecución del programa.
{
    int NUM; // Se declara una variable de tipo entero para almacenar el número que el usuario ingresará.
    long CUA, SUC = 0; // Se declaran dos variables de tipo long: CUA para almacenar el cuadrado del número y SUC para acumular la suma de todos los cuadrados, inicializándola en 0.

    printf("\nIngrese un número entero -0 para terminar-:\t"); // Se solicita al usuario que ingrese un número entero, indicando que puede ingresar 0 para finalizar.
    scanf("%d", &NUM); // Se lee el valor ingresado por el usuario y se guarda en la variable NUM.

    while (NUM) // Se inicia un bucle que seguirá ejecutándose mientras el valor de NUM sea distinto de cero.
    {
        CUA = pow(NUM, 2); // Se calcula el cuadrado del número utilizando la función pow() y se almacena el resultado en CUA.
        printf("%d al cuadrado es %ld", NUM, CUA); // Se muestra en pantalla el número ingresado junto con su cuadrado.

        SUC = SUC + CUA; // Se añade el cuadrado calculado a la suma total de cuadrados acumulados en SUC.

        printf("\nIngrese un número entero -0 para terminar-:\t"); // Se pide al usuario que ingrese otro número entero, reiterando que puede ingresar 0 para detener el proceso.
        scanf("%d", &NUM); // Se lee el nuevo número proporcionado por el usuario y se almacena nuevamente en NUM.
    }

    printf("\nLa suma de los cuadrados es %ld", SUC); // Se imprime en pantalla el total acumulado de los cuadrados calculados durante la ejecución del programa.
}
