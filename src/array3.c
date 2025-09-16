#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");

    int valores [7] = {10,56,30,10,1,47,59};
    int numeros [5] = {3,10,4,77,47};
    for (int i = 1 ; i <= 6 ; i++){
        for (int j = 0 ; j <=4 ;j++){
            if(numeros[j]==valores[i]){

            printf ("%d\n",numeros[j]);
            }
        }
    }
    return 0;

}
