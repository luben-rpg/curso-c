// entradas y salidas


#include <stdio.h>
int mainf(){
    int a;
    float b;
    char c;
    printf("ingresa el valor de la variable a \n");
    scanf("%i",&a);
    printf("\n el valor es %i", a);
    printf("ingresa el valor de la variable b \n");
    scanf("%f",&b);
    printf("\n el valor es %.1f ", b);
    printf("ingresa el valor de la variable c \n");
    scanf("%c",&c);
    printf("\n el valor es:  %c ",c);

    


       return 0;
}
int main(){
    char x[50];
    printf("ingresa tu nombre \n");
    gets(x);
    printf("!hola %s",x);
    return 0;
}