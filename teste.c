#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float x, f_de_x;
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	if(x <= 1){
		printf("\n f(x)=1 \n");
	}
	
	if(x > 1 && x <= 2){
		printf("\n f(x)=2 \n");
	}
	
	if(x > 2 && x <=3){
		printf("\n f(x)=%f \n", x*x);
	}
	
	if(x > 3){
		printf("\n f(x)=%f \n", x*x*x);
	}
	
	return 0;
} 