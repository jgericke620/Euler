#include <stdio.h>
#include <math.h>

//Functoin decalrations

int is_prime(long y);

void main(void)
{
    long high;
    

    long roof = 600851475143;
    long count = 2;
    int ans;
    int done = 0;
    long factor;

    while(done == 0)
    {
        
        if((roof%count)==0)
        {
            factor = roof/count;
            ans = is_prime(factor);
            if (ans == 1)
            {
                high = factor;
                done = 1;
            }
        }
        count++;
        
    }
    printf("Higest factor prime: %ld \n", high );
    
}



int is_prime(long y)
{
    long end = sqrt(y);
    for(long i=2; i<end; i++)
    {
        if( (y%i)==0 )
        {
            return 0;
        }
    }
    return 1;
}
