#include<stdio.h>
int fibonacciSeries(n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return (fibonacciSeries(n-1)+1);
    }
    else
    {
        for(int i=2;i<n;i++)
        {
        return (fibonacciSeries(n-1) + fibonacciSeries(n-2));
        }
    }
    
}