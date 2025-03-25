#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i;

    for(i=80; i>=40; i=i-5){
        printf("%d ", i);
    }

    return 0;

}
