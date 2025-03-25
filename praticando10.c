#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double x = 5.0e10;
    printf("Valor de x: %e", x);

    return 0;
}
