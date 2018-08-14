#include <stdio.h>

void main(void)
{
    int y = 1900;
    int m = 1;
    int d = 0;
    int d_n = 0;
    int ly = 0;
    int ans = 0;

    while( (y < 2000) || (m < 12) || (d < 31) )
    {
        d++;
        d_n++;



        if(d_n > 7) 
        {
            d_n = 1;
        }
        if( ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)) && (d>31) ) 
        {
            m++;
            d=1;
        }
        else if( ((m==4)||(m==6)||(m==9)||(m==11)) && (d>30) ) 
        {   
            m++;
            d=1;
        }
        else if( (m==2) && (ly==0) && (d>28)) 
        {
            m++;
            d=1;
        }
        else if( (m==2) && (ly==1) && (d>29))
        {
            m++;
            d=1;
        }        
        if( m>12 )
        {
            y++;
            ly = 0;
            m=1;
            if(y%400 == 0) 
            {
                ly=1;
            }
            if( (y%4 == 0) && (y%100 != 0))
            {
                ly=1;
            }   
        }
        //printf("%d_%d-%d-%d\n",d_n, d, m, y);
        if( (y>1900)&&(d_n == 7) && (d == 1) )
        {
            ans++;
        }

    
    }
    printf("%d\n", ans);

}
