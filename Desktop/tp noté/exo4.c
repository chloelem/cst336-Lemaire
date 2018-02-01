exo4
#include <stdlib.h>
#include <stdio.h>
int main()
{ int n= 0;
float total=20;
for (n=0;n<315; n++)
 total= total-total*89.0/10000.0;
 printf("%.6f", total);
 return 0;
 }