#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
        
 float *sequencias_geradas (size_t n) {
    size_t i;
    srand (time(NULL));
    float *res = (float*) malloc (n*sizeof(float));
    for (i = 0; i < n ; i ++) {
    	res [i] = rand()%1000;
    }
    return res ;
}
int main () {
    setlocale(LC_ALL,"");   
    printf (" Gerar de numeros aleatorios: \n");
    clock_t t1;
    t1 = clock();
    int n = 100, i;
	float*res = sequencias_geradas (n);
    int m = 0;
    	for (i = 0; i < n ; i ++) {
    	printf ("res [%i] %.2f\n", i, res[i]);
    	m = m + res[i];
    }
    t1 = clock () - t1;
	printf("\n tempo final %f 's\n", (((float)t1)/CLOCKS_PER_SEC));
    printf("\n media resultante: %i\n", media/n);

    return 0;
 }
