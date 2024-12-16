#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    for(i=1;i<=100;i++){

        printf("%d\n",i);

        if(i % 10 ==0){
            printf("%d - divisivel por 10\n",i);
        }
    }
}