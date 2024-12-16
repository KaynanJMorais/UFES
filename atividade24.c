#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portugues_Brazil");

    int valores[5];
    int i, maior, menor;
    float media = 0;

    for(i=0;i < 5;i++){
        printf("Digite 5 valores\n");
        printf("%d - ", i+1);
        scanf("%d", &valores[i]);
        media += valores[i];
    }

    maior = valores[0];
    menor = valores[0];
    float soma = media/5;
    for(i=0;i < 5;i++){
        if(valores[i] < menor){
            menor = valores[i];
            }
        if(valores[i] > maior){
            maior = valores[i];
        }
}
    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);
    printf("Media dos valores: %.2f\n", soma);
}