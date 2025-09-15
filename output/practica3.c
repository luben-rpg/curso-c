//tipo de datos
#include <stdio.h>
int main(){
    char a = 'A';// tamaño = 1byte rango: 0 ...255
    printf ("el valor de a es: %c \n",a);

    short f = -15; // tamaño = 2 bytes rango: -128 ...127
    printf("el valor de f es: %i \n",f);

    int b = 1024; //tamaño = 2 bytes rango -32,768 ...32.767
    printf("el valosr de b es: %i \n",b);

    unsigned int v = 2048; //tamaño = 2 bytes rango: 0 ...65,535
    printf("el valor de v es: %u \n",v);

    long c = 123456; //tamaño = 4 bytes rango: -2,147,483,648 ...2,147,483,647
    printf("el valor de c es: %li \n",c);

    float h = 3.1416; // tamaño = 4 bytes rango: 
    printf("el valor de h es: %f \n",h);

    double ff = 1231.321564;// tamaño =8 bytes rango: 
    printf("el valor de ff es: %lf \n",ff);

}