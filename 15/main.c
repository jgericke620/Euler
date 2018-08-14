#include <stdio.h>

void search(long *pointer, int x, int y);
void permutations(int down, int right);
unsigned long long factorial(unsigned long long x);


void main(void)
{
    //long paths = 0;
    //long *ptr = &paths;
    //search(ptr,0,0); Would take long to execute
    //printf("Paths : %ld\n", paths);

    permutations(20,20);

    //printf("%ld\n", factorial(5));

    
}


void search(long *pointer, int x, int y)
{
    int lim = 18;
    if (x < lim)
    {
        search(pointer, x+1, y);
    }

    if (y < lim)
    {
        search(pointer, x, y+1);
    }

    //printf("%d,%d\n", x, y);
    if ( (x==lim) && (y==lim) )
    {
        *pointer = *pointer + 1;
    }
    //printf("%ld\n", paths);
    return;
}

// Permutations
// There are 20 down moves and 20 right moves. How many permutations?

void permutations(int down, int right)
{
    unsigned long long upper = factorial(down + right);
    printf("%llu\n", upper);
    unsigned long long denominator = (factorial(down)*factorial(right));
    printf("%llu\n", denominator);
}

unsigned long long factorial(unsigned long long x)
{
    if (x==1)
    {
        return 1;
    }
    return (x*factorial(x-1));
}