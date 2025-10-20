//Faça um programa que peça 5 números reais. Depois, o programa deve apresentar o número menor. 
 #include <stdio.h>

 int main(){
    float menor, num[5];
    int i;

    for(i=0; i<5; i++){

        printf("Digite um número:");
        scanf("%f", &num[i]);

    }

    menor = num[0];

    for(i=1; i<5; i++){
        if(num[i] < menor){
            menor = num[i];
        }
    }

    printf("O menor numero é: %.2f", menor);

    return 0;
 }