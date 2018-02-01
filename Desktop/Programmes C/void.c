#include <stdio.h>
void Permuter (int *pA, int *pB)
{  
    int C;
    C = *pA;
    *pA = *pB;
    *pB = C;
}


int main (int argc, char * argv[])
{
       int A, B;
       printf ("A : ");
       scanf ("%d", &A);
       printf ("\nB : ");
       scanf ("%d", &B);
       printf ("\nA : %d, B : %d\n", A, B);

      return 0;
}