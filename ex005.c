// Faça um programa que peça 5 números inteiros e, no final, troque a ordem do primeiro número com a do último número digitado.

#include <stdio.h>

int main(){

    int num[5], i, aux;

    for(i=0; i<5; i++){

        printf("Digite o numero:");
        scanf("%d", &num[i]);

    }

    aux = num[4];
    num[4] = num[0];
    num[0] = aux;

    for(i=0; i<5; i++){

        printf("%d", num[i]);

    }

    return 0;
}
