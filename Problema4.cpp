#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int binomial(int n, int k) {
  if (n == k || k == 0){
    return(1);
  }
  return (binomial(n-1, k-1) + binomial(n-1, k));
}

int main(){
    int n,k;
    printf("Insira n:");
    scanf("%d", &n);
    printf("Insira k:");
    scanf("%d", &k);
    //printf("%d\n", binomial(n,k));
    printf("%d\n", binomial(n,k));
}
