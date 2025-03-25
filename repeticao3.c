#include<stdio.h>
#include<stdlib.h>

int main(){

    int cont=0, idade, i;
    for(i=0; i<10; i++){
        printf("Digite as idades: ");
        scanf("%d", idade);
        if(idade>=18){
            cont++;
        }
    }
    Printf("O numero de maior de idade e: %d", cont);

    return 0;

}
