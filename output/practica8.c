// hacer un calculador de area de trapecios
#include <stdio.h>

int main(){
    float b1 ,b2 , h, area;
    printf( "introduce el valor de la base 1\n");scanf("%f",&b1);
    printf( "introduce el valor de la base 2\n");scanf("%f",&b2);
    printf( "introduce el valor de la altura 1\n");scanf("%f",&h);
    area =((b1 +b2)*h)/2;
    printf("el area total de tu trapecio es de: %.2f", area);

    return 0;
}