//Faça um programa que peça 6 valores inteiros. Após digitados os valores, a ordem deve ser trocada de forma que. o primeiro valor deve ser colocado na última posição do vetor, o segundo valor deve ser colocado na penúltima posição e assim por diante. 

#include <stdio.h>

int main(){

    int vet[6], i, troca = 5, copia;

    for(i=0; i<6; i++){

        printf("Digite um numero:");
        scanf("%d", &vet[i]);
     
    }

    for(i=0; i<3; i++){

        copia = vet[i];
        vet[i] = vet[troca];
        vet[troca] = copia;
        troca--;

    }

    for(i=0; i<6; i++){

        printf("Numero:%d\n", vet[i]);
       
    }

    return 0;
} 

