/*
*               1//

*/

#include <stdio.h>

int main()

{

    int nu, cont = 1, suma = 0, total = 1;

    printf("digite un numero entero:");
    scanf("%i", &nu);

    if (nu >= 10)
    {
        while (cont <= nu)
        {
            total *= cont;
            cont++;
        }
        printf("%i", total);
    }
    else
    {
        if (nu < 10)
        {

            while (cont <= nu)
            {
                suma += cont;
                cont++;
            }
        }
        printf("%i", suma);
    }
    return 0;
}