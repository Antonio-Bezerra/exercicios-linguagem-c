#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, quadrado, cubo, multp23;
    printf("Digite um n�mero natural: ");
    scanf("%i", &num1);
    printf("Digite um n�mero inteiro: ");
    scanf("%i", &num2);
    printf("Digite um n�mero primo: ");
    scanf("%i", &num3);
    quadrado = num1 * num1;
    cubo = num2 * num2 * num2;
    multp23 = num3 * quadrado * cubo;
    printf("\nO quadrado do n�mero natural: %i", quadrado);
    printf("\nO cubo do n�mero inteiro: %i", cubo);
    printf("\nA multiplica��o do n�mero primo com o quadrado e o cubo: %i", multp23);


    printf("\n\n-------\n");
    system("pause");
    return 0;
}
