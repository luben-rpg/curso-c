//* expresion condicional: el operador '?'
/*
! sintaxsis
!          condicion ? expresion1: expresion2
*/

#include <stdio.h>
int main()
{
    int numero;
    printf("escribe cualquier numero entero: \n");
    scanf("%i", &numero);
    (numero % 2 == 0) ? printf("el numero es par") : printf("el numero es impar");
    /* condicion                if                              else           */
    
    
    // se puede ver como
    return 0;
}
