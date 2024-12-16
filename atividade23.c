#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Faça progama que exiba numeros ímpares entre 100 e 200

int main() { 
    int i;
    for(i=100; i<200;i++){
        if(i%2!=0){
        printf("%d ", i);
    }
}
}