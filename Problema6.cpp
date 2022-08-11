#include <stdio.h>

void VetorAoContrario(int n[], int qtd, int ini);
int main(){
    int qtd;
    printf("Insira o tamanho do vetor:");
    scanf("%i", &qtd);
    int v[qtd];
    printf("\nInsira os valores do vetor:\n");
    for (int i = 0; i <qtd; i++){
        scanf("%i", &v[i]);
    }
    VetorAoContrario(v, qtd-1, 0);
    for (int i = 0; i <qtd; i++){
        printf("%i\t", v[i]);
    }
    
}

void VetorAoContrario(int n[], int qtd, int ini) {
  int x;
  if (qtd > ini){
    x = n[ini];
    n[ini]=n[qtd];
    n[qtd]= x;
    VetorAoContrario(n, qtd-1, ini+1); 
  }
}
