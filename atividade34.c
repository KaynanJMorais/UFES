#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,valores[5],total = 0;

    printf("Digite 20 valores e veja quanto são pares\n");
    for(i=0;i<5;i++){
        printf("%d: ",i+1);
        scanf("%d",&valores[i]);
    }

    for(i = 0; i < 5; i++) {
        printf("%d\n", valores[i]);
        if(valores[i] % 2 == 0) {
        printf("%d e par\n", valores[i]);
        total++;
        }
    }

    printf("Total de numeros pares: %d\n",total);
}