#include <stdio.h>
//utilizaremso a biblioteca stdlib que guarda
// os comandos de limpar a tela e pause
#include <stdlib.h>

int main(){
    //comando para limpar a tela em linux
    system("clear");
    int n;
    printf("digite um ano e tecle enter\n");
    scanf("&d", &n);
    //se o valor digitado pelo o usuario dividido por 2 e
    //restar 0, então o valor é par
    if( n % 4 == 0 ){
        printf("o ano &d que voce digitou é um ano bissexto \n",n);
    }
    else{
        printf("o ano &d que voce digitou não é um ano bissexto \n");
    }
    return 0;
}