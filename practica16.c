#include <stdio.h>
#include <string.h>

int main() {
    char nombre[30], signo[10];
    
    printf("Enter your name: ");
    fgets(nombre, 30, stdin);  // Lee el nombre
    
    printf("Cual es tu signo: ");
    scanf("%9s", signo);    // Lee el signo
    
    if (strcmp(signo, "aries") == 0) {
        printf("\nEs signo aries, su nombre es: %s", nombre);
    } else {
        printf("No es signo aries");
    }
    
    return 0;
}