#include <stdio.h>
#define N 5
int main ()
{
	int T[N] = {1,2,3,4,5};
	int i;
	int somme = 0;
	for ( i=0 ; i<N ; i++ )
		somme = somme + T[i];
	printf("%f", ((float)somme)/N);
	return 0;
}