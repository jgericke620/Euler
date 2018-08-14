#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



void main(void)
{
    int a = 999;
    int b = 999;
    long high = 1;
    long c = 1;

    char ans[]="000000";

    for(int i = a; i>100 ; i--)
    {
        for(int j = b; j > 100; j--)
        {
            c = j * i;
            snprintf(ans, sizeof(ans), "%ld", c);

            if ( (ans[0] == ans[5]) && (ans[1]==ans[4]) && (ans[2]==ans[3]))
            {
                if(c > high)
                {
                    high = c;
                }
            }

        }
    }
    printf("Highest palidrome : %ld \n", high);

}
