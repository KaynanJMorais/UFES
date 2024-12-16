#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int vetor[5],vetor2[5],i,vetor3[5];
    for(i=0;i<5;i++){
        printf("Digite o valor V1 - %d: ",i+1);
        scanf("%d",&vetor[i]);
        }

        printf("\n");
    for(i=0;i<5;i++){
        printf("Digite o valor V2 - %d: ",i+1);
        scanf("%d",&vetor2[i]);
    }

    for(i=0;i<5;i++){
    vetor3[i] = vetor[i] + vetor2[i];
    }   

    printf("Resultado do vetor 3:\n");
    for(i=0;i<5;i++){
        printf("%d ", vetor3[i]);
    }
}