#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    int nota1 = 10;
    int nota2 = 8;
    int nota3 = 5;

    int notas[3] = {10,8,5};

    printf("A nota é %d - posição em memória %p\n",nota1,&nota1);
    printf("A nota é %d - posição em memória %p\n",nota2,&nota2);
    printf("A nota é %d - posição em memória %p\n",nota3,&nota3);
    printf("\n----------------------------------------------\n");
    printf("A primeira nota é %d - posição de memória %p\n",notas[0],&notas[0]);
    printf("A segunda nota é %d - posição em memória %p\n",notas[1],&notas[1]);
    printf("A terceira nota é %d - posição em memória %p\n",notas[2],&notas[2]);
    

    return 0;
}