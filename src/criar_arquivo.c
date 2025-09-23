#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    FILE *novo;
    novo = fopen("files/cadastro.txt","a");
    fprintf(novo, "Olá Snoopy, Bom dia neném");
    printf("Arquivo criado!\n");
    fclose(novo);

    return 0;
}