#include <stdio.h>

int main()
{

    int opcion;
    float saldo = 1000, restar, add;

    printf("\tBienbenido a su cajero virtual");
    printf("\n1.    ingreso en cuenta");
    printf("\n2.    retirar dinero de la cuenta");
    printf("\n3.    salir");
    puts("\n ");
    scanf("%i", &opcion);
    switch (opcion)
    {
    case 1:
        puts("cuanto dinero deseas ingresar a la cuenta");
        scanf("%f", &add);
        saldo += add;
        printf("ahora tu saldo actual es de: %.2f", saldo);
        break;
    case 2:
        puts("cuanto dinero deseas retirar a la cuenta");
        scanf("%f", &restar);
        if (saldo < restar)
        {
            printf("el monto supera el saldo disponible");
        }
        else
        {
            saldo -= restar;
            printf("ahora tu saldo actual es de: %.2f", saldo);
        }

        break;

    case 3:
        break;
    }
    return 0;
}