#include <stdio.h>

#define NUM_FUNCIONARIOS 3

int main() {
    char nomes[NUM_FUNCIONARIOS][100]; // Array para armazenar os nomes
    float salarios[NUM_FUNCIONARIOS];   // Array para armazenar os salários
    float totalAntes = 0.0, totalDepois = 0.0; // Variáveis para total antes e depois do reajuste
    int i;

    // Entrada de dados
    for (i = 0; i < NUM_FUNCIONARIOS; i++) {
        printf("Digite o nome do funcionário %d: ", i + 1);
        scanf(" %[^\n]", nomes[i]); // Lê o nome com espaços
        printf("Digite o salário de %s: ", nomes[i]);
        scanf("%f", &salarios[i]);
        totalAntes += salarios[i]; // Soma o salário ao total antes do reajuste
    }

    // Cálculo e exibição dos novos salários
    printf("\nListagem de funcionários com novos salários:\n");
    for (i = 0; i < NUM_FUNCIONARIOS; i++) {
        float novoSalario = salarios[i] * 1.08; // Calcula o novo salário com 8% de reajuste
        totalDepois += novoSalario; // Soma o novo salário ao total depois do reajuste
        printf("Nome: %s, Novo Salário: %.2f\n", nomes[i], novoSalario);
    }

    // Exibição dos totais
    printf("\nTotal gasto com a folha de pagamento antes do reajuste: %.2f\n", totalAntes);
    printf("Total gasto com a folha de pagamento depois do reajuste: %.2f\n", totalDepois);

    return 0;
}