#include <stdio.h>

/* ventas descendentes.
El programa, al recibir como datos tres valores que representan las ventas
de los vendedores de una tienda de discos, escribe las ventas en
orden descendente.

P, S y R: variables de tipo real. */

void main(void)
{
    float P, S, R;
    printf("\nIngrese las ventas de los tres vendedores: ");
    scanf("%f %f %f", &P, &S, &R);
    if (P > S)
        if (P > R)
            if (S > R)
            printf("\n\n El orden es P, S, R: %8.2 %8.2 %8.2", P, S, R);
    else
        printf("\n\n El orden es P, R y S: %8.2 %8.2 %8.2", P, R, S);
    else
        printf ("n\n El orden es R, P, S: %8.2 %8.2 %8.2", R, P, S);
    else
        if (S > R)
                if (P > R)
                printf("\n\n El orden es S, P y R: %8.2 %8.2 %8.2", S, P, R);
    else
        printf("\n\n El orden es S, R y P: %8.2 %8.2 %8.2", S, R, P);
    else
        printf("\n\n El orden es R, S y P: %8.2 %8.2 %8.2", R, S, P);
}