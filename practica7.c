//sacar la hipotenusa de un triangulo rectangulo pidiendo al usuario 2 valores

#include <stdio.h>
#include <math.h>
int main(){
    float h, co , ca;
    printf("Escribe el valor del cateto opuesto y el cateto adyasente \n" );
    scanf("%f%f", &co,&ca);
    h = sqrt(pow(co,2)+pow(ca,2));//sqrt es la raiz cuadrada
    printf ("el valos de la hipotenusa es de; %.2f", h);
return 0;
}