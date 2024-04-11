#include <stdio.h>
#include <stdlib.h>

int main(){
  float primeira_av, segunda_av, terceira_av, media;
  char nome[999];

  printf("Insira o seu nome: \n");
  scanf("%s", &nome);
  printf("Insira a nota da primeira avaliação: \n");
  scanf("%f", &primeira_av);
  printf("Insira a nota da segunda avaliação: \n");
  scanf("%f", &segunda_av);
  printf("Insira a nota da terceira avaliação: \n");
  scanf("%f", &terceira_av);

  media = (primeira_av*2 + segunda_av*4 + terceira_av*4)/10;

  printf("A MEDIA FINAL DE %s", nome);
  printf(" FOI: %.2f", media);

  if (media >= 7 && media <= 10){
    printf(" \nAPROVADO");
  }
  if (media >= 0 && media < 5){
    printf(" \nREPROVADO");
  }
  if (media >= 5 && media < 7){
    printf(" \nRECUPERACAO");
  }
  
}
