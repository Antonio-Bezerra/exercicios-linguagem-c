#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int codigo;
    float valor, receita, despesas, saldo1, saldo2;
    char R, D;
    printf("Código do projeto: ");
    scanf("%i", &codigo);
    printf("Valor das despesas: ");
    scanf("%f", &despesas);
    printf("Valor da receita: ");
    scanf("%f", &receita);
    saldo1 = valor - despesas;
    saldo2 = saldo1 + receita;
    printf("\nProjeto: %i\nSaldo final: %.2f\n", codigo, saldo2);
    if(saldo2 == -1){
        printf("\nPROGRAMA ENCERRADO!");
    }

    printf("\n\n-----------");

    return 0;
}
