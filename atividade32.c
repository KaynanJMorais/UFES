#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    int k,vet[5],i,encontrado = 0;

    for(i=0;i<5;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vet[i]);
    }

    printf("Digite o valor de k: ");  
    scanf("%d", &k);

    for(i=0;i<5;i++){
        if(vet[i] == k){
            printf("O valor %d foi encontrado na posicao %d\n",k,i+1);
            encontrado = 1;
            break;
            }
    }

    if(!encontrado){
        printf("O valor %d nao foi encontrado\n",k);
    }

}