#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(long y);

void main(void)
{
    int count = 0;
    long number = 1;
    long prime;

    while (count != 10001)
    {
        number++;
        if (is_prime(number) == 1)
        {
            count++;
            prime = number;
        }
    }

    printf("%ld\n", prime);
}

int is_prime(long y)
{
    int end = (int)(sqrt(y) + 1);
    for (long i = 2; i < end; i++)
    {
        if ((y % i) == 0)
        {
            return 0;
        }
    }
    return 1;
}