#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float projetos[10];
    int i;
    struct {
    int numero;
    float valor;
    char tipo;
    } boleto;
    /* Inicializar o vetor*/
    for (i=0; i < 10; i++){
        projetos[i] = 0.0;
    }

    printf("\nDigite o c�digo do projeto: ");
    scanf("%d", &boleto.numero);
    while (boleto.numero != -1){
    printf("\nDigite o Valor: ");
    scanf("%f", &boleto.valor);
    printf("\nDigite o tipo de transa��o (R ou D): ");
    getchar();//limpar o teclado do Enter anterior
    scanf("%c", &boleto.tipo);

    if (boleto.tipo == 'R' || boleto.tipo == 'r') {
      projetos[boleto.numero] = projetos[boleto.numero] + boleto.valor;
    } else{ if (boleto.tipo == 'D' || boleto.tipo == 'd'){
                projetos[boleto.numero] = projetos[boleto.numero] - boleto.valor;
        }else {
            printf("Tipo Inv�lido !!");
        }
    }
    printf("\nDigite o c�digo do projeto: ");
    scanf("%d", &boleto.numero);
    }
    for (i=0; i < 10; i++){
        printf("\nSaldo do projeto %d = %.2f\n",i, projetos[i]);
    }
}
