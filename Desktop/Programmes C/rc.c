#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])

{
   if (argc>1)

{
   float A = atof (argv[1]);
   float x = A/2.0;
   int i, k;
   if (argc>2)
      k = atoi (argv[2]);
   else
       k = 100;
   for (i = 1; i <= k; i = i + 1) 
       x = (x + A/x)/2;

   printf("x %f", x);

}
   else
       printf ("Il manque un argument !");
   return 0;

}
   
