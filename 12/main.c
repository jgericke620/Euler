#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void main(void)
{
    int ans = 0;
    long tri_num = 1;
    long nat_num = 1;

    long count = 2;

    long divisor = 1;
    long factor = 0;
    while(ans == 0)
    {
        //printf("%ld\n", nat_num);
        
        for(int i=1; i< sqrt(nat_num)+1; i++)
        {
            if ( (nat_num%i) == 0)
            {
                factor++;
            }
            if(factor > 250)
            {
                printf("Tri %ld   Nat %ld  \n", tri_num, nat_num);
                ans = 1;
                i = nat_num;
            }
        }
        //printf("Factor: %ld\n", factor);
        nat_num += count;
        tri_num++;
        count++;
        factor=0;
    }
}