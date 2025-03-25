#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, media;

    printf("Calcular a sua média\n\nDigite as três notas: ");
    scanf("%f%f%f", &num1, &num2, &num3);
    media = (num1 + num2 + num3) / 3;
    printf("Sua média: %.2f", media);

    return 0;

}
