#include<stdio.h>
int main()
{
    int e,c;
    scanf("%d%d",&e,&c);
    if(e>=18 && c==1)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}