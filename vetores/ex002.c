//Faça um programa que peça 6 valores inteiros e, depois, apresente-os na tela.

#include <stdio.h>

int main(){

    int i, vet[6];

    for(i=0; i<6; i++){

        printf("Digite seu número: ");
        scanf("%d", &vet[i]);

    }

    for(i=0; i<6; i++){

        printf("%d\n", vet[i]);

    }

    return 0;
}