#include<stdio.h>
int main (){
    int horas,minutos,seg, t1,t2,t3,total;
    printf("digita el numero de horas minutos y segundos que deseas convertir a segundos: \n");scanf("%i%i%i",&horas,&minutos,&seg);
    t1 = horas *3600;
    t2 = minutos *60;
    t3= seg;
    total =t1+ t2+ t3;
    printf("el total de segundos es de %i seg.", total);
    return 0;
}