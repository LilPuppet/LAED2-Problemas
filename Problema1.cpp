#include <stdio.h>
#include <time.h>
int funcaoDemorada(int n); //chama-se a função para ser executada no main

int main(){
    clock_t t1;//cria clock
    int n; //cria número que será usado na função
    t1 = clock(); //define clock como tempo atual da máquina
    printf("Defina o numero:"); //pede o número e lê
    scanf("%i", &n);
    printf("%i\n", funcaoDemorada(n));//executa a função
    t1 = clock()-t1; //clock se torna o tempo atual menos o marcado anteriormente
    printf("%f\n", (float)t1/CLOCKS_PER_SEC);//imprime o tempo de execução da função
}

int funcaoDemorada(int n){
    int soma=0;
    for (int i = 0; i < n; i++){//vai repetir de 0 a n
        for (int j = 0; j < n; j++){//dentro de 0 a n, vai repetir novamente de 0 a n
            for (int k = 0; k < n; k++){//dentro dos dois 0 a n, repete mais uma vez de 0 a n
                for (int l = 0; l < n; l++){//dentro dos três 0 a n, repete mais uma vez de 0 a n
                    soma = i+j+k+l; //soma os números dos contadores em cada repetição, quanto maior o número, mais demorado
                }
            }
        }
    }
    return soma;//retorna a soma
}
