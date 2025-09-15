//pide al usuario 2 numeros, sumalos, restalos, multiplicalos, dividelos
#include <stdio.h>
int main(){
    float res, a , b ;

    printf("Hola bienvenido \n ingresa los dos valoresvalor");
    scanf("%f %f",&a, &b);
    res = a + b;
    printf("la suma es: %.1f \n", res);
    res = a - b;
    printf("la resta es: %.1f \n", res);
    res = a * b;
    printf("la multiplicacion es: %.1f \n", res);
    res = a / b;
    printf("la divicion es: %.2f \n", res);
    
    return 0;
}