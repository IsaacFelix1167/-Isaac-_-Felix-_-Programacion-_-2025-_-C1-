#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Expresi�n.

El programa, al recibir como datos tres valores enteros,
establece si los mismos satisfacen una expresi�n determinada.

R, T y Q: variables de tipo entero
RES: variable de tipo real. */

void main(void)
{
    //Declaracion de variables
    float RES;
    int R, T, Q;

    //Mensaje y Lectura de los valores
    printf("Ingrese los valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);

    // C�lculo de la expresi�n utilizando la funci�n pow de la biblioteca math.h que significa potencuia
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    // Comprobando si RES es menor que 820
    if (RES < 820)
    {
        // Presenacion de los valores de R, T y Q si la condici�n se cumple
        printf("\nR = %d\tT = %d\tQ = %d\n", R, T, Q);
    }
    return 0;
}
