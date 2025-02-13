#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n&1;
    if(k==1)
    {
        printf("Set");

    }
    else
    {
        printf("Not Set");
    }
    return 0;
}