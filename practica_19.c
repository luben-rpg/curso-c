#include <stdio.h>

int main()

{
    int vehiculo;
    printf("digita el tipo de vehiculo:\n 1-Turismo.\n 2-Autobus.\n 3-Motocicleta.\n 4-Otros.\n ");
    scanf("%i", &vehiculo);
    switch (vehiculo)
    {
    case 1:
        printf("Peaje = $500");
        break;
    case 2:
        printf("Peaje = $3000");
        break;
    case 3:
        printf("Peaje = $300");
        break;
    default:
        printf("vehiculo no autorizado");
        break;
    }
    return 0;
}