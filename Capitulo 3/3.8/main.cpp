#include <iostream>
#include <stdio.h> // Se incluye la biblioteca estándar que permite realizar operaciones de entrada y salida.

void main(void) // Función principal donde comienza la ejecución del programa.
{
    int I, NUM; // Se declaran dos variables enteras: I para usar como contador y NUM para almacenar el número cuyo factorial se calculará.
    long FAC; // Se declara una variable de tipo long para almacenar el resultado del factorial.

    printf("\nIngrese el número: "); // Se solicita al usuario que ingrese un número entero.
    scanf("%d", &NUM); // Se lee el número ingresado y se guarda en la variable NUM.

    if (NUM >= 0) // Se verifica si el número ingresado es mayor o igual a cero, ya que el factorial solo está definido para números no negativos.
    {
        FAC = 1; // Se inicializa la variable FAC en 1, que es el valor del factorial de 0 y el punto de inicio para el cálculo.

        for (I = 1; I <= NUM; I++) // Se inicia un bucle que va desde 1 hasta NUM, multiplicando cada número para calcular el factorial.
            FAC *= I; // Se multiplica el valor actual de FAC por I, acumulando el producto en FAC.

        printf("\nEl factorial de %d es: %ld", NUM, FAC); // Se imprime el resultado del factorial calculado, formateado adecuadamente.
    }
    else // Si el número ingresado es negativo, se ejecuta esta parte.
        printf("\nError en el dato ingresado"); // Se informa al usuario que el dato ingresado es inválido para el cálculo del factorial.
}

