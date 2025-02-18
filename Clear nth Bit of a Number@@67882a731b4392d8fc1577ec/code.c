#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int result = (n & (~(1<<(k-1))));
    printf("%d",result);
}