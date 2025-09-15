#include <stdio.h>
#include <math.h>

int main()
{
    int opcion, numero;
    float res;

    puts("\tbienvenido que desea realizar??\n");
    printf("1.    cubo de un numero");
    printf("\n2.    es par o impar el numero");
    printf("\n3.    salir\n");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:
        printf("excelente cual es el numero ??\n");
        scanf("%i", &numero);
        res = pow(numero, 3);
        printf("%.f", res);
        break;
    case 2:
        printf("excelente cual es el numero: \n");
        scanf("%i", &numero);
        if (numero % 2 == 0)
        {
            printf("el numero %i es par", numero);
        }
        else
        {
            puts("es impar");
        }
        break;
    case 3:
        break;

    default:
        break;
    }

    return 0;
}