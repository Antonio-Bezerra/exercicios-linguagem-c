#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, media;

    printf("Calcular a sua m�dia\n\nDigite as tr�s notas: ");
    scanf("%f%f%f", &num1, &num2, &num3);
    media = (num1 + num2 + num3) / 3;
    printf("Sua m�dia: %.2f", media);

    return 0;

}
