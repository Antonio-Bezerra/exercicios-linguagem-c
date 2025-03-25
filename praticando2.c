#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    printf("Informe as 3 notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("Sua média: %.2f\n\n", media);

    return 0;
}
