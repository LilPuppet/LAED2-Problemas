#include <stdio.h>
#include <time.h>
int aaa(int n);

int main(){
    clock_t t1;
    t1 = clock();
    printf("%i\n", aaa(100));
    t1 = clock()-t1;
    printf("%f\n", (float)t1/CLOCKS_PER_SEC);
}

int aaa(int n){
    int soma=0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                for (int l = 0; l < n; l++){
                    soma = i+j+k+l;
                }
            }
        }
    }
    return soma;
}
