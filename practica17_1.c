// hacer un prgorama que boore la pantalla al pulsa 1

#include <stdio.h>// + - * / % 
#include <stdlib.h> 
#include <math.h> // raices trigonometria log exporenciales trigonometria inversa etc..



int main (){
    char marca[20];
    printf("\n bienvenido a nuestas promocions de fin de año \n");
    printf("que modelo buscas: \n"); scanf("%19s",marca);
    if (strcmp(marca,"honda")==0){
        printf("tenemos 3 modelos en promocion  del 5 porciento de descuento \n");                  
    } else
    {   fflush (stdin);
        if (strcmp(marca,"yamaha")==0){
            printf("tenemos 3 modelos en promocion  del 8 porciento de descuento \n");
        } else{
            fflush (stdin);
            if (strcmp(marca,"susuki")==0){
            printf("tenemos 3 modelos en promocion  del 10 porciento de descuento \n");
        
        }else{
            fflush (stdin);
            printf("tenemos 10 modelos en promocion  del 2 porciento de descuento \n");}
        }
    
        
    return 0;
}}
