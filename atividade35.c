#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

int main(){
    int i,vetor[SIZE],maior,menor;

    printf("Digite 5 valores\n");
    for(i=0;i<SIZE;i++){
        printf("%d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
     for(i=0;i<SIZE;i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
        if(vetor[i]<menor){
            menor = vetor[i];
        }
     }

     printf("Maior numero: %d\n",maior);
     printf("Menor numero: %d\n",menor);
}