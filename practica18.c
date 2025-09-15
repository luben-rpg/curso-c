// sentencia switch
/*
    case etiqueta1;  sentencia1;break; //debenser etiquetas cortas ej: 1,2,3,4,'a','s'...etc
    case etiqueta3;  sentencia3;break;
    defeault: sentencias;
*/
// ejemplo numero
#include <stdio.h>
int main()
{
    int numero;
    printf("digita un numero entre 1 y 3: \n");
    scanf("%i", &numero);
    switch (numero)
    {
    case 1:
        printf("el numero es 1");
        break;
    case 2:
        printf("el numero es 2");
        break;
    case 3:
        printf("el numero es 3");
        break;
    default:
        printf("no has indicado un numero correcto");
    }
    return 0;
}
