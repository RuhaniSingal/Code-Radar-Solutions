#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch[50]=n%2;
    n=n/10;
    while(n>0)
    {
        int k=n%2;
        strcat(ch,k);
        n=n/10;
    }
    printf("%d",(int)ch);
    return 0;
}