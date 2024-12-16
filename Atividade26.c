#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,n,fatorial;

    printf("Digite o numero para calcular o fatorial: ");
    scanf("%d", &n);   
    fatorial = 1;

    for(i=n;i>0;i--){
        fatorial = fatorial * i;
    }

    printf("Fatorial e: %d\n", fatorial);
    system("pause");
}

