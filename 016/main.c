#include <stdio.h>

void main(void)
{
    int ans[400];

    for(int i = 0; i< 399; i++)
    {
        ans[i] = 0;
    }

    int carry=0;
    int place=1;
    ans[0] = 1;
    
    for(int j = 0; j<1000; j++)
    {
        carry = 0;
        place = 0;

        for(int k = 0; k< 399; k++)
        {
            place = ans[k] * 2 + carry;
            carry = place/10;
            ans[k] = place%10;
        }
    }

    long total = 0;
    for(int m = 400; m>0; m--)
    {
        total += ans[m-1];
        printf("%d",ans[m-1]);
    }

    printf("\n%ld\n", total);
}