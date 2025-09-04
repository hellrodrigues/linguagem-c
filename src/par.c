#include <stdio.h>
//utilizaremos a biblioteca stdlib que guarda
// os comandos de limpar a tela e pause
#include <stdlib.h>

int main(){
    //comando para limpar a tela em linux
    system("clear");
    int n;
    printf("digite um numrero inteiro e tecle enter\n");
    scanf("&d", &n);
    //se o valor digitado pelo o usuario dividido por 2 e
    //restar 0, então o valor é par
    if( n % 2 == 0 ){
        printf("o numero que voce digitou é par \n",n);
    }
    return 0;
}