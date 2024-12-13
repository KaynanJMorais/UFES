#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int a,b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    if (a < b){
        printf("%d is less than %d\n", a, b);
    } 
    else if(b < a){
        printf("%d is less than %d\n", b, a);
    }
    else if(a==b){
        printf("%d is equal to %d\n", a, b);
    }
    else{
        printf("Invalide number try do code again\n");
    }
}