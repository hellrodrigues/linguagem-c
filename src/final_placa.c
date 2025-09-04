#include <stdio.h>
#include <stdlib.h>

int main(){
    int placa;
    //  Vamos limpar a tela do terminal
    system("clear");
    printf("Digite o número final da placa do veículo:\n");
    scanf("%d",&placa);

    if(placa == 1 || placa == 2){
        printf("Rodízio na segunda-feira. Não pode circular\n");
    }
    else if(placa == 3 || placa == 4){
        printf("Rodízio na terça-feira. Não pode circular\n");
    }
    else if(placa == 5 || placa == 6){
        printf("Rodízio na quarta-feira. Não pode circular\n");
    }
    else if(placa == 7 || placa == 8){
        printf("Rodízio na quinta-feira. Nâo pode circular\n");
    }
    else if(placa == 9 || placa == 0){
        printf("Rodízio na sexta-feira. Não pode circular");
    }
    else{
        printf("Final de placa inválido!\n");
    }
    return 0;
}