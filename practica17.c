// hacer un prgorama que boore la pantalla al pulsa 1

#include <stdio.h>
#include <stdlib.h>


int main (){
    char tecla;
    printf("programa de borrado de pantalla \n");
    printf("\n--------------------------------------------\n");
    printf("\n--------------------------------------------\n");
        printf("pulsa el numero 1:");
    scanf("%c",&tecla);
    if (tecla=='1'){
        system("cls");
        printf("A funcionado el limpiado de pantalla");

    }else{
        puts("no ha funcionado el limpiado de patalla");
    }



    return 0;
}
