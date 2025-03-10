#include<stdio.h>
int fibonacciSeries(n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return (fibonacciSeries(n-1)+1);
    }
    else
    {
        return (fibonacciSeries(n-1)+fibonacciSeries(n-2));
    }

}