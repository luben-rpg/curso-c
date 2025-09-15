#include <stdio.h>
#include<math.h>


int main(){
    float n;
    printf("cual es el numero \n"); scanf("%f",&n);
    
    if(n < 0 ){
        printf("el numero %.2f tiene raiz imaginaria y es de: %.2f",n,sqrt(n));
    }else{
    if (n >= 0){
        printf("su raiz cuadrada es de: %.2f", sqrt(n));
    }}
    return 0;
}