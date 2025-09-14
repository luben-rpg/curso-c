/**
*!              dada la nota de un examen mediante un codigo escribir literal que le responda ina nota


*!                                               (a) - Exelente

*!                                               (b) - Notable

*!                                               (c) - Aprobado

*!                                               (f) y (d) - reprobados
 **/

/**
 *?                                              solucion:
 */

#include <stdio.h>

int main()

{
    char nota;
    printf("cual es la nota del alumno: \n en mayusculas: \n");
    scanf("%s", &nota);
    switch (nota)
    {
    case 'A':
        printf("(A)-Excelente");
        break;
    case 'B':
        printf("(B)-Notable");
        break;
    case 'C':
        printf("(C)-Aprobado");
        break;
    case 'D':
        printf("(D)-reprobado");
        break;
    case 'F':
        printf("(F)-reprobado");
        break;
    default:
        printf("no es una nota valida");
        break;
    }
    return 0;
}