#include<stdio.h>
#include<iostream>

int fat (int n);

int main () {
   int n;                        
printf("Informe o número para obter seu fatorial:\n");
scanf("%i",&n);

printf("O Fatorial de %d é: %d \n",n,fat (n));

return 0;
}

//Função
int fat(int n){
if ((n==1) || (n==0)) return 1;               
   else
      return fat(n-1)*n;
}
