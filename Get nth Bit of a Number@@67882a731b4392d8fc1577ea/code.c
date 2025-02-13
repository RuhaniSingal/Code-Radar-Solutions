#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    int k = n>>p;
    printf("%d",k&1);
    return 0;
}