#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return (fibonacci(n-1)+1);
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}
int fibonacciSeries(int n)
{
    for(int i=0;i<n;i++)
    {
        int fib= fibonacci(i);
        printf("%d",fib);
    }
}