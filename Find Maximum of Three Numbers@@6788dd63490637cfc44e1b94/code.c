#include<stdio.h>
int main()
{
    int a,b,c;
    int longest;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        longest = a;
    }
    else if((b>a)&&(b>c))
    {
        longest = b;
    }
    else
    {
        longest = c;
    }
    printf("%d",longest);
    return 0;
}
