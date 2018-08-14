#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void main(void)
{

    int c;
    int cs;

    for(int i = 1; i < 999; i++)
    {
        for(int j = 1; j < 999; j++)
        {
            cs = (i * i) + (j * j);
            c = sqrt(cs);
            if ( cs == (c*c) )
            {
                if( (i + j + c) == 1000 )
                {
                    printf("%d\n", (i*j*c));
                    return;
                }

            }
        }
    }
}