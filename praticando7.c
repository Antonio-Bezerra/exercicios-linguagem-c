#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, quadrado, cubo, multp23;
    printf("Digite um número natural: ");
    scanf("%i", &num1);
    printf("Digite um número inteiro: ");
    scanf("%i", &num2);
    printf("Digite um número primo: ");
    scanf("%i", &num3);
    quadrado = num1 * num1;
    cubo = num2 * num2 * num2;
    multp23 = num3 * quadrado * cubo;
    printf("\nO quadrado do número natural: %i", quadrado);
    printf("\nO cubo do número inteiro: %i", cubo);
    printf("\nA multiplicação do número primo com o quadrado e o cubo: %i", multp23);


    printf("\n\n-------\n");
    system("pause");
    return 0;
}
