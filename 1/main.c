#include <stdio.h>

void main(void)
{
    int total = 0;
    for (int i = 1; i < 1000; i++)
    {
        if ((i % 3) == 0 || (i % 5) == 0)
        {
            //printf("%d \n", i);
            total = total + i;
        }
    }

    printf("%d \n", total);
}