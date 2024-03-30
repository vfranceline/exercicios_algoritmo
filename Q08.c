#include <stdio.h>

float numero, soma;

int main(){
    
    soma = 0;
    
    for (int i=1; i<=10; i=i+1){
        scanf("%f", &numero);
        soma = soma+numero;
    }
    printf("%f", soma);
}
