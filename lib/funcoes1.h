#include <stdio.h>

//.h e uma blioteca, ele não mostra ele só compoem  o que mostra e o .c

void exibir(int valor){
    printf("%d\n",valor);
    printf("%p\n",&valor);
}
void exibir2(int *valor){
    printf("\n--------------------Exbir 2 ------------------------\n");
    printf("%d\n",*valor);
    printf("%p\n",valor);
}//menos espaço ocupar memoria melhor. (anda mais se for para celular)