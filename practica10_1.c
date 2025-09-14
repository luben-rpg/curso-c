//

#include<stdio.h>
int main (){
    float nota1,nota2,nota3,corte55,examen30,trabajo15, total;
    printf ("escribe tus  3 notas del primer corte:\n"); scanf("%f%f%f",&nota1,&nota2,&nota3);
    corte55 = ((nota1 + nota2 + nota3)/3)*0.55;
    printf ("escribe tu nota del examen final:\n"); scanf("%f",&examen30);
    examen30 = examen30 * 0.30;
    printf ("escribe tu nota del trabajo final:\n"); scanf("%f",&trabajo15);
    trabajo15 = trabajo15 * 0.15;
    total = corte55 + examen30 + trabajo15;
    printf("tu nota final es de: %.2f", total); 
    return 0;
    
}