//operadores de asignacion 
#include <stdio.h>
int main(){
    //int a,b,c,d;
    //a=b=c=d=10;
    //printf("el valor de a,b,c y d es de : %i %i %i %i", a,b,c,d);
    int a=10;
    a += 10; // a = a + 10
    a -= 5 ; // a = a - 5
    a *= 2 ; //a= a * 2
    a /= 3 ; // a = a / 3
    a %= 2 ; //a = a % 2
    a <<= 1; // a = a << 1
    a >>= 1; // a = a >> 1
    a &= 2 ; // a = a & 2
    a ^= 2 ; // a = a ^ 2
    a |= 2 ; // a = a | 2

    printf("el valor de a es: %i",a);
    return 0;
}