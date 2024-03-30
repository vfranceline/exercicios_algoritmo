#include <stdio.h>

int inicio, fim;

int main(){
    scanf("%d", &inicio);
    scanf("%d", &fim);

    for (int i=inicio; i<=fim; i=i+1){
        printf(" \n %d", i);
    }
    
}
