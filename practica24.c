/*
*               1// suma de los n primeros numero

*/

#include <stdio.h>

int main()
{
    int n, i = 1, suma = 0;
    printf("cuanos numeros deseas evaluar?\n");
    scanf("%i", &n);

    while (i <= n)
    {

        suma += i;
        i++;
    }
    printf("la suma total de los %i es de : %i", n, suma);
    return 0;
}
