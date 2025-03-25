#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int ano_nascimento, ano_atual, idade;
    printf("Informe seu ano de nascimento: ");
    scanf("%i", &ano_nascimento);
    printf("Informe o ano atual: ");
    scanf("%i", &ano_atual);
    idade = ano_atual - ano_nascimento;

    printf("\nSua idade é %i\n", idade);

    return 0;

}
