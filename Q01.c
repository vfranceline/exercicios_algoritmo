#include <stdio.h>
#include <stdlib.h>

int main(){
  float salario_base, salario_total;
  
  scanf("%f", &salario_base);
  salario_total = (salario_base*1.05)-(salario_base*0.07);
  printf("%.2f", salario_total);

}
