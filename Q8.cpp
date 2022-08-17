#include<stdio.h>

//Fatorial Normal 
int fatorial(int N)
{
    if (N == 0)
    {
        return 1;
    }
    else
    {
        return N * fatorial(N - 1);
    }
}

int main()
{
    int N;
    printf("Digite um número:\n");
    scanf("%d", &N);
    int vetor[N];
    for (int i = 1; i <= N; i++)
    {
        vetor[i] = fatorial(i);
    }
    printf("NUMBER\t|\tFACTORIAL\n");
    for (int i = 1; i <= N; i++)
    {
        printf("%d\tfat(%d) = %d\n", i, i, vetor[i]);
    }
}
