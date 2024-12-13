#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    float salario, novosalario, reajuste;

    printf("Write your salary: \n");
    scanf("%f", &salario);

    if(salario <= 300){
        reajuste = salario * 0.35;
        novosalario = salario + reajuste;     
    }
    if(salario > 300){
        reajuste = salario * 0.15;
        novosalario = salario + reajuste;
    }

    printf("The new salary is: %.2f and the reajuste is %.2f\n", novosalario, reajuste);
}