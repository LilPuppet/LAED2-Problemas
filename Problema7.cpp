#include <iostream>
#include <math.h>
#include <stdio.h>
// função
float raiz(float(x), float(x0), float(e)) {
  float nx, respequacao, ne;
  nx = sqrt(x);
  respequacao = sqrt(((x0 * x0) + x) / (2 * x0));
  ne = sqrt(e);
    printf("\nraiz de x= %.2f", nx);
    printf("\nraiz da equação= %.2f", respequacao);
    printf("\nraiz de E= % .2f", ne);
  return 0;
}

int main() {
  float x0, x, e;
    printf("insira um valor de aproximação x0: ");
      scanf("%f", &x0);
    printf("insira um valor para x: ");
      scanf("%f", &x);
    printf("insira um valor de de erro admissível E: ");
      scanf("%f", &e);
  // se menor que E, printar x0
      if ((x0 * x0) - x <= e) {
    printf("\n%.2f", x0);
  }
  // if maior que E, puxar a função
      else if ((x0 * x0) - x > e) {
        raiz(float(x), float(x0), float(e));
  }
