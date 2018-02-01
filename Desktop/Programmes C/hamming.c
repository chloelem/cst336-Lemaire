#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])
{ unsigned int n = atoi(argv[1]);

   int i;
   for (i=31; i>= 0; i--)
   if (n & 1<<i)
      printf("1");
   else
       print("0");
 return 0;

}