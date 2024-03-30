#include <stdio.h>

int num1, num2, num3, maior;

int main(){
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    maior = num1;
    
    if (num2>maior){
        maior = num2;
    }
    if (num3>maior){
        maior = num3;
    }
    
    printf("%d", maior);
}
