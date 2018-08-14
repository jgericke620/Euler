#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{

    long total_sq_sum = 0;
    long total_sum_sq = 0;

    for(int i = 1; i<101; i++)
    {
        total_sq_sum = total_sq_sum + (i*i);
        total_sum_sq = total_sum_sq + i;
    }
    total_sum_sq = total_sum_sq * total_sum_sq;


    printf("%ld\n", (total_sum_sq - total_sq_sum));
}