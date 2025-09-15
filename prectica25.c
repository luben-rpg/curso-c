#include <stdio.h>
int main()
{

    int numero, i = 1;
    printf("digita los numero que quieres ver ");
    scanf("%i", &numero);

    while (i <= numero)
    {
        if (i % 3 == 0)
        {
            printf("%i - ", i);
        }
        i++;
    }
}