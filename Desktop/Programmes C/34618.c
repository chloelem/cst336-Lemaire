#include <stdlib.h>
#include <stdio.h>
int main()
{int n=0;
float total= 100008;
for ( n=0; n<104; n++)
  total= (1 + (total)) *83.0/100.0;
  printf("%.6f",total);
  return 0;
}



