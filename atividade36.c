#include <stdio.h>

#define num 2

int main() {
    char nome[num][100];
    int i;
    float salario[num], novosalario[num];
    float antes = 0 ,depois = 0;

    for(i=0;i<num;i++){
        printf("Digite o nome do funcionario %d: ",i+1);
        scanf(" %[^\n]", nome[i]);
        printf("Digite o Salario de %s: " ,nome[i]);
        scanf("%f", &salario[i]);
        antes += salario[i];
    }

    printf("\n");
    for(i=0;i<num;i++){
        novosalario[i] = salario[i] * 1.08;
        depois += novosalario[i];
        printf("%s, seu novo salario e: %.2f\n",nome[i], novosalario[i]);
    }

    printf("\n");
    printf("folha de pagamento antes: %.2f\n", antes);
    printf("Folha de pagamento apos reajuste %.2f\n", depois);
}