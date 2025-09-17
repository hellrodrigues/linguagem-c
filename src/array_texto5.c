#include <stdio.h>
#include <stdlib.h>

int main(){
     system("clear");
    

    float nota1, nota2, nota3, nota4, resultado;
    char nome_completo[30];
    printf("Digite o seu nome\n");
    fgets (nome_completo,30,stdin);

    printf("digite a primeira nota tecle enter\n");
    scanf("%f",&nota1);

    printf("digite a segunda nota tecle enter\n");
    scanf("%f",&nota2);

    printf("digite a terceira nota tecle enter\n");
    scanf("%f",&nota3);

    printf("digite a quarta nota tecle enter\n");
    scanf("%f",&nota4);

    resultado = ( nota1 + nota2 + nota3 + nota4)/4;
    printf("A nota final é: %.2f\n",resultado);

    if(resultado >= 7){
        printf("Aprovado\n");
    }

    if(resultado <= 4){
        printf("Reprovado, em recuperação\n");
    }
   
    
    return 0;

}


   
