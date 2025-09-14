// calculador de horas trabajadas promedio de horas calcular valor por horas
#include<stdio.h>

int main (){
    int horas, dias;
    float precio,total_M,total_s;
    printf ("cuantas horas trabajas por dia: \n");scanf("%i",&horas);
    printf ("cual es el precio por hora: \n");scanf("%f",&precio);
    printf("cuantos dias a la seman trabajas: \n");scanf("%i",&dias);
    total_M= ((horas * precio) * dias) * 4;
    total_s= ((horas * precio) * dias);
    printf("tu salario mensual es de : %2.f $", total_M);
    printf("tu salario semanal es de : %2.f $", total_s);
    
}