// Este programa pede ao usuário dois números e, 
// realiza a soma entre eles e ao final exibe o 
// resultado
#include <stdio.h> 
int main (){
    // declarar as variáveis que irão receber
    // os números digitados pelos usuários
    int numero1;
    int numero2;
    int resultado;
    // Vamos pedir ao usuário entrar com primeiro valor
    printf("Digite um número: \n");
    // capturando o número digitando pelo usuários
    // com o comando scanf
    scanf("%d",&numero1);

    printf("Digite outro número inteiro e tecle Enter: \n");
    scanf("%d", &numero2);

    // Vamos realiza a soma entre os número 1 e 2
    resultado = numero1 + numero2;

    // Apresentar o resultado em tela
    printf("A soma do número %d com o número %d é %d \n", numero1, numero2, resultado);

    return 0;

}
