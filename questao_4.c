#include <stdio.h>
#include <stdlib.h>

int main(){
  float primeira_av, segunda_av, terceira_av, media;
  char nome[999];

  scanf("%s", &nome);
  scanf("%f", &primeira_av);
  scanf("%f", &segunda_av);
  scanf("%f", &terceira_av);

  media = (primeira_av*2 + segunda_av*4 + terceira_av*4)/10;

  printf("A MEDIA FINAL DE %s", nome);
  printf(" FOI: %.2f", media);

  if (media >= 7){
    printf("APROVADO");
  }
}
