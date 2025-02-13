#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s;
    scanf("%d",&s);
    int k=n>>s;
    printf("%d",k);
    return 0;
}