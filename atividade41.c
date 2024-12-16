#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int soma = 0,i,j,matriz[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o numero da matriz [%d][%d] ",i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                soma+=matriz[i][j];
            }
        }
    }

    printf("A soma da diagonal principal e\n: %d", soma);
    system("pause");
}