#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, soma, quadrado_da_soma;
    printf("Digite tr�s n�meros inteiros: ");
    scanf("%i%i%i", &num1, &num2, &num3);
    soma = num1 + num2 + num3;
    if(soma > 10){
        quadrado_da_soma = soma * 2;
        printf("\nO quadrado da soma � %i\n", quadrado_da_soma);
    }else{
        printf("\nA soma dos tr�s n�meros � %i\n", soma);
    }

    printf("\n-----\n");
    system("pause");
    return 0;
}
