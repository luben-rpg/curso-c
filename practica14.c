#include <stdio.h>
#define Tarifa1 1.2
#define Tarifa2 1.0
#define Tarifa3 0.9
int main(){
    float gasto, tasa;
    puts ("digita el costo total de consumo electrico: \n");scanf("%f",&gasto);
    if (gasto <1000){
    tasa = Tarifa1;
    }
    if (gasto>1000 && gasto < 1850){
        tasa = Tarifa2;
    }
    if (gasto>1850){
        tasa = Tarifa3;
    }
    printf("el total a pagar es de: %.2f \n", tasa);
    
}