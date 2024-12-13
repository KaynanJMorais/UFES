#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float saldo,reajuste,credito;

    printf("Write Your Average Salary on the last year and discover your credit: \n");
    scanf("%f", &saldo);

    if(saldo >= 400){
        reajuste = saldo * 0.30;
        credito = reajuste + saldo;
    }
    else if(saldo < 400 && saldo > 300){
        reajuste = saldo * 0.25;
        credito = reajuste + saldo;
    }
    else if(saldo < 300 && saldo > 200){
        reajuste = saldo * 0.20;
        credito = reajuste + saldo;
    }
    else if(saldo < 200){
        reajuste = saldo * 0.10;
        credito = reajuste + saldo;
    }
    else{
        printf("Invalid Salary \n");
    }
    

    printf("Your average salary is: %.2f and the credit unlock is: %.2f\n", saldo, credito);
    return 0;
}