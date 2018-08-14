#include <stdio.h>

void main(void)
{
    int arr[200];

    for(int i = 0; i<200; i++)
    {
        arr[i] = 0;
    }

    arr[0] = 1;


    int count = 100;

    int temp = 0;
    int carry = 0;

    for(int i = count; i>0; i--)
    {
        for(int j = 0; j<200; j++)
        {
            temp = (arr[j] * i) + carry;
            carry = temp / 10;
            arr[j] = temp % 10;
        }
    }

    long total = 0;
    for(int k = 0; k<200; k++)
    {
        total += arr[k];
    }

    printf("%ld\n", total);
}