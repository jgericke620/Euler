#include <stdio.h>
#include <stdlib.h>

void main(void)
{

        int answer = 0;
        int n = 1;
        int div_true;
        int test_num;

        while(answer == 0)
        {
            div_true = 1;
            test_num = 20 * n;
            
            for(int i = 19; i>2; i--)
            {
                if ( (test_num%i)!=0 )
                {
                    div_true = 0;
                    i = 2; 
                }
            }

            if(div_true == 1)
            {
                answer = 1;
            }

            n++;
            
            
        }
    printf("%d\n", test_num);
}