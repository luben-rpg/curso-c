/*
TODOS:              sentencia while
*           sintaxsis

!       while(condicion){
!           instrucciones;
!       }
*/

#include <stdio.h>
int main()
{
    int i = 1, d = 10;
    while (i <= 10)
    {
        printf("\t%i \n", i);
        i++;
    }
    while (d >= 0)
    {
        printf("\t%i \n", d);
        d--;
    }
    return 0;
}
