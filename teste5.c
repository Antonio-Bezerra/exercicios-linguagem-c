#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float renda_mensal, per_capita;
    int num_pessoas;
    printf("Informe a renda mensal da fam�lia: ");
    scanf("%f", &renda_mensal);
    printf("Informe o n�mero de membros da fam�lia: ");
    scanf("%i", &num_pessoas);
    per_capita = renda_mensal / num_pessoas;
    printf("\nSua renda familiar per capita: %.2f\n", per_capita);
    if(per_capita > 500){
        printf("\nRenda alta para entrar no programa\n");
    } else{
        printf("\nACEITO NO PROGRAMA!\n");
    }

    return 0;
}
