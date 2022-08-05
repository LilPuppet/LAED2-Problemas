#include <stdio.h>
#include <time.h>

int main(){
    int qtd;
    printf("Insira o tamanho do vetor:");
    scanf("%i", &qtd);
    int v[qtd];
    printf("\nInsira os valores do vetor:\n");
    for (int i = 0; i <qtd; i++){
        scanf("%i", &v[qtd-i-1]);
    }

    for (int i = 0; i <qtd; i++){
        printf("%i\t", v[i]);    
    }

}