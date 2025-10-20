#include <stdio.h>

int main(){

    int i, vet[6];

    for(i=0; i<6; i++){

        printf("Digite seu número: ");
        scanf("%d", &vet[i]);

    }

    for(i=5; i>=0; i--){

        printf("%d", vet[i]);

    }

    return 0;
}