#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portugues_Brazil");
    char comodo[100];
    float comprimento,largura,somaarea=0,area;
    int repetir = 0;

    printf("Qual comodo deseja calcular?\n");
    gets(comodo);
    printf("Qual comprimento da %s\n",comodo);
    scanf("%f", &comprimento);
    printf("Qual largura da %s\n",comodo);
    scanf("%f", &largura);
    area = largura*comprimento;
    printf("O comprimento total: %.2f\n", area);
    somaarea += area;

    do{
    printf("Digite 1 para continuar ou 0 para sair\n");
    scanf("%d", &repetir);
    if (repetir == 1){
    printf("Qual comodo deseja calcular?\n");
    gets(comodo);
    printf("Qual comprimento da %s\n",comodo);
    scanf("%f", &comprimento);
    printf("Qual largura da %s\n",comodo);
    scanf("%f", &largura);
    area = largura*comprimento;
    printf("O comprimento total: %.2ff\n", area);
    somaarea += area;
    }
    }
    while(repetir!=0);

    printf("Area total da casa:  %.2f\n", somaarea);
    

}
