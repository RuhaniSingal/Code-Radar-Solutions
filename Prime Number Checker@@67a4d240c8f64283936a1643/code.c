#include<stdio.h>
int isPrime(int l)
{
    int count =0;
    for(int i=1;i<=l;i++)
    {
        if(l%i==0)
        {
            count++;
        }
        if(count==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}









