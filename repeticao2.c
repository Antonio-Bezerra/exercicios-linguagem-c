#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int num1, num2, soma=0;
    do{
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        soma = num1 + num2;
    }while (soma<=15);

    return 0;

}
