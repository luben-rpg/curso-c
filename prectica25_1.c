#include <stdio.h>
int main()
{

    int numero, i = 1, m;
    printf("digita los numero que quieres ver:\n quieres saber cuales son los multiplos de : ");
    scanf("%i %i", &numero, &m);

    while (i <= numero)
    {
        if (i % m == 0)
        {
            printf("%i - ", i);
        }
        i++;
    }
}