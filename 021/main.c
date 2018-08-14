#include <stdio.h>

int sum_of_factors(int x);

void main(void)
{
    //  d(n) = SUM of (factors of n)

    //  d(a) = b and d(b) = a   and   a!=b
    int arr[5000];
    int temp;
    int count = 0;
    int exists_a = 0;
    int exists_b = 0;
    int total = 0;

    for(int i =0; i<5000; i++)
    {
        arr[i] = 0;
    }

    for(int i = 1; i<10001; i++)
    {
        temp = sum_of_factors(i);
        if (temp != i)
        {
            if (i==sum_of_factors(temp))
            {
                for(int j = 0; j<count+1; j++)
                {
                    if (i == arr[j])
                    {
                        exists_a = 1;
                    }
                    if (temp == arr[j])
                    {
                        exists_b = 1;
                    }
                }

                if ((exists_a == 0) && (exists_b == 0))
                {
                    count++;
                    arr[count] = i;
                    count ++;
                    arr[count] = temp;
                }
                else if (exists_a == 0)
                {
                    count++;
                    arr[count] = i;
                }
                else if (exists_b == 0)
                {
                    count++;
                    arr[count] = temp;
                }
                exists_a = 0;
                exists_b = 0;
            }

        }

    }

    for(int m = 0; m< count+1; m++)
    {
        printf("%d ", arr[m]);
        total += arr[m];
    }

    printf("\n\n %d \n", total);
}



int sum_of_factors(int x)
{
    int total =0;
    for(int i = 1; i<x ; i++ )
    {
        if(x%i==0)
        {
            total += i;
        }
    }

    return total;
}