#include <stdio.h>
#include <string.h>

struct complexe
{char nom[40];
int realPart;
int imagPart;
};


void main()

{
struct complexe a,b;
a.realPart=3;
a.imagPart=-2;
b.realPart=5;
b.imagPart=7;
strcpy(a.nom,"solution1");
strcpy(b.nom,"solution2");
printf("a=%d + %d*i",a.imagPart,a.realPart);



}