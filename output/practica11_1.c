// medida geometria entre 3 numero x

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, m;
    printf("ingresa los tres valores para la medida geometrica: \n");
    scanf("%f%f%f", &a, &b, &c);
    m = 1 / 3 * (a * b * c);
    printf("la medida geometrica es de: %.2f", m);
    return 0;
}