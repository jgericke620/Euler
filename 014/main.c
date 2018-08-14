#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
    long chain = 0;
    long trace = 0;

    int high = 0;
    long high_start = 0;

    for(int i = 3; i< 1000000; i++)
    {   
        chain=0;
        trace = i;
        while (trace != 1)
        {
            chain++;
            if ((trace%2)==0)
            {
                trace = trace /2;
            }
            else 
            {
                trace = (trace*3) + 1; 
            }

        }
        if (chain > high)
        {
            high = chain;
            high_start = i;
        }
    }
    printf("%ld\n", high_start);
}