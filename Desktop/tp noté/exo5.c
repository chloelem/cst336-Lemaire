#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
        int i,j;
int R=0
		for (i=0;i<78;i++)
	{
		for(j=0;j<i;i++)
					{
	if(i%j == 0 || j!=1 )
              {
           R += i;
	break;							 
							}							
					}
		}
		printf("%d", R);
return 0;
}

