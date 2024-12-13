#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float price,fabrica,imposto,consumidor;

    printf("How much is the value of the car you look for?\n "); 
    scanf("%f", &price);

    if(price <= 12000){
        fabrica = price * 0.05;
        consumidor = price + fabrica;
    }
    else if(price > 12000 && price < 25000){
        imposto = price * 0.15;
        fabrica = price * 0.10;
        consumidor = price + imposto + fabrica;
    }
    else if(price > 25000){
        imposto = price * 0.20;
        fabrica = price * 0.15;
        consumidor = price + imposto + fabrica;
    }
    else{
        printf("Wrong value");
    }

    printf("The factory price is %.2f and the final price is %.2f\n",price, consumidor);



}