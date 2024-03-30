#include <stdio.h>

int num;

int main(){
  scanf(" %d", &num);
  if (num%2==0){
    printf("%s", "o número é par");
  }
  else{
    printf("%s", "o número é ímpar");
  }
}
