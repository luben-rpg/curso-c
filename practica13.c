#include <stdio.h>
int main(){
    float examen;
    printf("cual fue tu nota en el examen? ?\n");
    scanf("%f",&examen);
    if (examen >=10.50){
        printf("has aprobado");
        }
    else{
        printf("has reprobado");
    }
    
    return 0;
}