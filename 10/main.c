#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(long y);

void main(void)
{
    long total = 5;

    for (long i = 5; i < 2000000; i += 2)
    {
        if(is_prime(i)==1)
        {
            total += i;
        }
    }
    printf("%ld\n", total);
}

int is_prime(long y)
{
    long end = sqrt(y);
    for(long i = 2; i < end+1; i++)
    {
        if( (y%i)==0 )
        {
            return 0;
        }
    }
    return 1;
}
