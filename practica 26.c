// 5 sumar pares desde n hasta m

#include <stdio.h>

int main()

{

    int i, n, m;

    printf("desde donde quieres empezar la suma:");
    scanf("%i", &n);
    printf(" hasta que numero quieres terminar la suma:");
    scanf("%i", &m);

    i = n;

    while (i <= m)
    {
        if (i % 2 == 0)
        {
            printf("%i - ", i);
        }
        i++;
    }
    return 0;
}