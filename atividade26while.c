#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,fat;

    printf("Digite um valor para calcular o fatorial: ");
    scanf("%d", &n);   

    fat = 1;
    while(n>0){
        fat = fat*n;
        n--;
    } 

    printf("Fatorial e: %d\n", fat);
    system("pause");
}