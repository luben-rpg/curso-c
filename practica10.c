//

#include<stdio.h>
int main (){
    float salario, aumento,
     total;
    aumento = 0.25;
    printf("cual es tu salario actual: \n"); scanf ("%f", &salario);
    total = salario +(salario * aumento);
    printf("tu sarario con el aumneto es ahora de : %.2f $ \n antesera de : %2.f $", total ,salario);
    return 0;
    
}