#include<stdio.h>
int prime(int l)
{
    int count =0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        if(count==2)
        {
            printf("%d",1);
        }
        else
        {
            printf("%d",0);
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k;
        scanf("%d",&k);
        prime(k);
    }
    return 0;
}