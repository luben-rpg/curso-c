/*
la sentencia if

    if (condicion){
        acciones
    }
*/
// prueba de divisibilidad

#include <stdio.h>
int main()
{
    int n1, n2;
    puts("dijita 2 numeros enteros: \n");
    scanf("%i%i", &n1, &n2);

    if (n1 % n2 == 0)
    {
        printf("%i si es divisible entre %i", n1, n2);
    }
    else
    {
        printf("%i no es divisible entre %i", n1, n2);
    }
    return 0;
}