#include<stdio.h>
int fibonacciSeries(int n)
{
    if(n==1)
    {
       printf("%d", return 0);
    }
    else if(n==2)
    {
        printf("%d", return(fibonacciSeries(n-1)+1));
    }
    else
    {
        printf("%d", return(fibonacciSeries(n-1)+fibonacciSeries(n-2)));
    }

}