#include <stdio.h>
#include <stdlib.h>
int main(){
    system("clear");
    float preco, resultado;
    char forma_pg;
    printf("digite o valor a ser pago e tecle enter\n");
    scanf("%f",&preco);
    printf("digite a forma de pagamento, sendo:\n c-> crédito\n d-> debito\nD-> dinheiro\np-> pix\n");
    scanf("%c",&forma_pg);

    if( forma_pg == 'c'){
        resultado = preco * (0.05 + 1);
        printf("o valor a ser pago no crédito é %f\n",resultado);
    }
    else if(forma_pg == 'd'){
        printf("o valor a se pago no debito é %f", preco);
    }
    else if(forma_pg == 'D'){
        resultado = preco * 0.98;
        printf("o valor a ser pago no dinheiro é %f\n",resultado);
    }
    else if (forma_pg == 'p'){
        resultado = preco * 0.96;
        printf("o valor a ser pago no pix é %f\n",resultado);
    }
    else{
        printf("ESSA FORMA DE PAGAMENTO NÃO EXISTE\n");
    }
    return 0;
    
}