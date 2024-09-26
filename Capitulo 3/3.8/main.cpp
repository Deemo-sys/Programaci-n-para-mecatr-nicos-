#include <iostream>
#include <stdio.h> // Se incluye la biblioteca est�ndar que permite realizar operaciones de entrada y salida.

void main(void) // Funci�n principal donde comienza la ejecuci�n del programa.
{
    int I, NUM; // Se declaran dos variables enteras: I para usar como contador y NUM para almacenar el n�mero cuyo factorial se calcular�.
    long FAC; // Se declara una variable de tipo long para almacenar el resultado del factorial.

    printf("\nIngrese el n�mero: "); // Se solicita al usuario que ingrese un n�mero entero.
    scanf("%d", &NUM); // Se lee el n�mero ingresado y se guarda en la variable NUM.

    if (NUM >= 0) // Se verifica si el n�mero ingresado es mayor o igual a cero, ya que el factorial solo est� definido para n�meros no negativos.
    {
        FAC = 1; // Se inicializa la variable FAC en 1, que es el valor del factorial de 0 y el punto de inicio para el c�lculo.

        for (I = 1; I <= NUM; I++) // Se inicia un bucle que va desde 1 hasta NUM, multiplicando cada n�mero para calcular el factorial.
            FAC *= I; // Se multiplica el valor actual de FAC por I, acumulando el producto en FAC.

        printf("\nEl factorial de %d es: %ld", NUM, FAC); // Se imprime el resultado del factorial calculado, formateado adecuadamente.
    }
    else // Si el n�mero ingresado es negativo, se ejecuta esta parte.
        printf("\nError en el dato ingresado"); // Se informa al usuario que el dato ingresado es inv�lido para el c�lculo del factorial.
}

