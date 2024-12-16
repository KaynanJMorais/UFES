#include <stdio.h>

int main() {
    int NumConsumidor, tipo;
    float consumo = 0, consumototal, valor = 0, v1,v2,v3, mediaconsumo = 0,c1,c2,c3 = 0;

    while (NumConsumidor != 0){
        printf("Digite o numero do consumidor: ");
        scanf("%d", &NumConsumidor);
        if(NumConsumidor == 0){
            break;
        }
        printf("Digite o codigo do consumidor\n");
        printf("1 - Residencial\t 2 - Comercial\n");
        printf("3 - Industrial: ");
        scanf("%d", &tipo);
        printf("Digite o consumo em KWh: ");
        scanf("%f", &consumo);

        switch (tipo)
        {
        case 1:
            valor = consumo * 0.3;
            v1 += valor;
            consumototal ++;
            c1 += consumo;
            printf("O valor total e de R$ %.2f\n", v1);
            break;
        case 2:
            valor = consumo * 0.5;
            v2 += valor;
            consumototal ++;
            c2 += consumo;
            printf("O valor total e de R$ %.2f\n", v2);
            break;
        case 3:
            valor = consumo * 0.7;
            v3 += valor;
            consumototal ++;
            c3 += consumo;
            printf("O valor total e de R$ %.2f\n", v3);
            break;
        default:
            break;
        }
        mediaconsumo = (c1+c2+c3)/consumototal;

    }
        printf("Consumo total Residencial: %.2f\n", c1);
        printf("Valor total: R$%.2f\n", v1);
        printf("Consumo total Comercial: %.2f\n", c2);
        printf("Valor total: R$%.2f\n", v2);
        printf("Consumo total Industrial: %.2f\n", c3);
        printf("Valor total: R$%.2f\n", v3);
        printf("Media do consumo geral: %.2f\n", mediaconsumo);
}