#include<stdio.h>
int main()
{
    int n,div;
    scanf("%d%d",&n,&div);
    if(n%div==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}