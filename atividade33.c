#include <stdio.h>

#define SIZE 10

int main() {
    int i, numeros[5];

    printf("Digite 5 valores\n");
    for(i=0;i<5;i++){
        printf("%d - ", i+1);
        scanf("%d", &numeros[i]);
    }

    for(i=5; i >=0;i--){
        printf("%d ", numeros[i]);
    }
}
