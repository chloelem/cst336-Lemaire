#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])

{

   int n;
   for (n = 0; n < argc; n = n +1)
       printf ("%s\n", argv[n]);

    return 0;
} 
      