#include <stdio.h>
#include <string.h>

void main(void)
{

    int cur_fib = 1;
    int old_fib = 1;
    int temp;

    int counter = 1;
    int roof = 4000000;
    int total = 0;
    
    while(cur_fib < roof)
    {
        if ( (cur_fib%2) == 0 )
        {
            total = total + cur_fib;
        }
        temp = cur_fib + old_fib;
        old_fib = cur_fib;
        cur_fib = temp;
    }

    printf("%d \n", total);

}