//
#include<stdio.h>
int main (){
 float a,b,c ,resultado;
    printf("introduce el valor de a\n");scanf("%f",&a);
    printf("introduce el valor de b\n");scanf("%f",&b);
    printf("introduce el valor de c\n");scanf("%f",&c);
    resultado = (a+b+c)/3;
    printf("el resultado es de: %.2f", resultado);
    return 0;

}