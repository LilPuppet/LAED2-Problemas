#include <stdio.h>

void VetorAoContrario(int n[], int qtd, int ini);//chama a função pra ser iniciada antes do main, para o main usar

int main(){
    int qtd;
    printf("Insira o tamanho do vetor:");//pede o tamanho vo vetor
    scanf("%i", &qtd);
    int v[qtd];//o vetor é criado com o tamanho pedido
    printf("\nInsira os valores do vetor:\n");//preenchimento do vetor
    for (int i = 0; i <qtd; i++){
        scanf("%i", &v[i]);
    }
    VetorAoContrario(v, qtd-1, 0);//chamada da função, qtd-1 significa: 7 posições - 1 = do 0 ao 6
    for (int i = 0; i <qtd; i++){//impressão do vetor
        printf("%i\t", v[i]);
    }
    
}

void VetorAoContrario(int n[], int qtd, int ini) {//a função pede o vetor, o número de itens no vetor e o inicio de execução (0)
  int x;
  if (qtd > ini){//enquanto o final for maior que o inicio o auxiliar x vai ajudar na troca de posições entre ps dois
    x = n[ini];
    n[ini]=n[qtd];
    n[qtd]= x;
    VetorAoContrario(n, qtd-1, ini+1); //após isso, os contadores se alteram: 0 1 2 3 -> 3 1 2 0 -> trocamos os iniciais, vamos andar casas
                                       // *3 1 2 *0 -> 3 *1 *2 0
                                       // vale lembrar que num vetor impar, onde o meio resulta em qtd=ini, não se altera.
  }
}
