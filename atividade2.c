#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int calculadora, finalizador = 0;
    float media, diferenca , produto, dividir, a, b;

        while(finalizador == 0){
        printf("escolha uma operacao\n");
        printf("1 - Media entre os numeros digitados\t 2 - Diferenca do maior pelo menor\n");
        printf("3 - Produto entre os numeros digitados\t 4 - Divisao do primeiro pelo segundo\n");
        scanf("%d", &calculadora);
        printf("digite o primeiro valor\n");
        scanf("%f", &a);
        printf("digite o segundo valor\n");
        scanf("%f", &b);
        switch (calculadora)
        {
        case 1:
            media = (a + b)/2;
            printf("a media é %.2f\n", media);
            break;
        case 2:
            if(a<b){
                printf("A diferenca e: %.2f\n", b-a);
            }
            else{
                printf("A diferenca e: %.2f\n", a-b);
            }
            break;
        case 3:
            produto = a * b;
            printf("o produto e %.2f\n", produto);
        break;
        case 4:
            dividir = a / b;
            printf("A divisao e: %.2f\n", dividir);
            break;
        
        default:
            break;
        }
        printf("deseja continuar? 0 - sim 1 - nao\n");
        scanf("%d", &finalizador);
        }
    printf("Obrigado por usar a calculadora\n");
}