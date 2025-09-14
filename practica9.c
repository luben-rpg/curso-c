//descuento del 15 porciento 


#include<stdio.h>
int main (){
    float articulo , descuento ,total;
    descuento = 0.15;
    printf("cual es el valor del articulo: \n");scanf("%f", &articulo);
    total= articulo - (articulo * descuento);
    printf("el precio total con el descuento fue de:  %.2f", total);
    return 0;
}