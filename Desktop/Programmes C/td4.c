#include <stdio.h>
#include <stdlib.h>
int verifPrem (int n)
{ 
  int i, resultat = 1;
  for ( i=2; i< n;i++)
	if (n%i==0)
       resultat = 0;
return resultat;
}

int verifPrem2 (int n)
{ 
  int i, resultat = 1;
i=2; 
while (i<n && n%i!=0)
	{
i++;
}
if i<n 
 printf ("prem")

return resultat;
}

int main () 
{ 
   int H;
   printf ("H:");
   scanf ("%d", &H);
   if (verifPrem(H))
      printf ("prem");
   else 
      printf ("non prem");
}