#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,fat; 
    fat = 1;

        printf("Digite um numero para calcular o fatorial: ");
        scanf("%d", &n);
    do{
            fat = fat * n;
            n--;
    }
    while(n>0);

    printf("O fatorial e: %d\n", fat);
    system("pause");
}