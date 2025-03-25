#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a = 125;
    int b = 0435;
    int c = 0x1FA;
    printf("Valor de a: %i\n", a);
    printf("Valor de b: %i\n", b);
    printf("Valor de c: %i\n", c);

    return 0;
}
