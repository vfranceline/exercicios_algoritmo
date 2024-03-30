#include <stdio.h>
#include <stdlib.h>

int main(){
  float num1, num2, resultado;
  char operacao;
  
  resultado=0;

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
  printf("Digite o segundo número: ");
  scanf("%f", &num2);
  printf("Digite a operação desejada (+, -, *, /): ");
  scanf("%s", &operacao);

  if (operacao=='-'){
    resultado=num1-num2;
  }
  if (operacao=='+'){
    resultado=num1+num2;
  }
  if (operacao=='*'){
    resultado=num1*num2;
  }
  if (operacao=='/'){
    resultado=num1/num2;
  }
  printf("%f", resultado);
}
