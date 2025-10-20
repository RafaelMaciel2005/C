//. Faça um programa que peça 5 números reais. Depois, o programa  deve apresentar o número maior.

#include <stdio.h>

int main(){

    float maior, vet[5];
    int i;

    for(i=0; i<5; i++){

        printf("Digite o número: ");
        scanf("%f", &vet[i]);

    }

    maior = vet[0];

    for(i=1; i<5; i++){
        if(vet[i] > maior){
            maior = vet [i];
        }
    }

    printf("O maior numero digitado foi: %.1f\n", maior);



    return 0;
}