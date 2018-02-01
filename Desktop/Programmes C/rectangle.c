#include <stdio.h>

int main ()
{
    int i;

    for (i=0; i < 10; i = i+1)
    {
        if ( i == 0 || i == 9)
           printf("*******");
        else
           printf("*     *");
     }
     printf("lala %d", i);
     return 0;
}