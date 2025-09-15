#include <stdio.h>
int main(){
    int n;
    printf("cual es el numero \n");
    scanf("%i",&n);
    if( n % 2 == 0){
        printf("es par");
    }
    if (n !=0){
        printf("es impar");
    }
    return 0;
}