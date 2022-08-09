#include <stdio.h>

float binomial(float n, float k) {
  float x;
  if (n == k && k == 0){
    return(1);
  }
  else{
    x = ((n-1)/(k-1))+((n-1)/k);
  }
  return(x);
}

int main(){
    float n,k;
    printf("Insira n:");
    scanf("%f", &n);
    printf("Insira k:");
    scanf("%f", &k);
    printf("%.1f ", binomial(n,k));
}

