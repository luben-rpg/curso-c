///directivas del preprocesador y variables

#include <stdio.h> //biblioteca estandar de entrada y salida

//#include <string.h>// biblioteca de manejo de cadenas
//#include <math.h>// bbiblioteca de funciones matematicas
///#include <stdlib.h>// bilioteca de funciones de proposito general
#define PI 3.1416 

int  x = 3; //variable global

int main(){
int x = 10 ;//variable local
    float suma = 0;

    
    suma = PI + x ;
    printf("la suma es %f",suma);


    return 0;
}