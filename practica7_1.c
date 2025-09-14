//calculador de longitudes de una circunferencia
#include <stdio.h>
#define pi 3.1416
int main(){
    float l,r;
    printf ("\n escribe el valor del radio: \n ");
    scanf ("%f",&r);
    l = 2*pi*r;
    printf ("\n El valor de la lonjitud es de: %.f", l);
    return 0;
}