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
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input\n");
        return 0;
    }

    fibonacciSeries(n);
    return 0;
}