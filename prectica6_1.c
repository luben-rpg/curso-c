
//convierte de celcius a farengheit
#include <stdio.h>
int main (){
    int c,  res , f = 9/5 +32;
    printf ("ingresa el valor que quieres convertir a farenheit \n ");
    scanf ("%i",&c);
    res = c * f;
    printf("el valor de grados celcios que ingresaste era de  %i y su conversion fue %i ", c, res);
    return 0;
}