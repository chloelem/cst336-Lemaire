#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv[])
{

   int n = atoi(argv[1]);
   int c = 0;
   int mask = 1; 
   while (n)
   { 

     c+= mask & n;
     n = n >> 1;
   }
   printf ("H : %d", c);
   return 0;
}