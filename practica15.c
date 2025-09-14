#include <stdio.h>

int main(){
    int n1,n2;
    puts("digita dos numeros enteros: \n"); scanf("%i%i",&n1,&n2);
    if (n1>n2){
        printf("%i es mayor que %i",n1, n2);
    }
    else{
        printf("%i es menor que %i",n1,n2);
    }

    return 0;
}