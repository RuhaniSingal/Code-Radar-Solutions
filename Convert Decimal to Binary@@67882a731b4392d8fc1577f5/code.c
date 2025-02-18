#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ch[50];
    int i=0;
    while(n>=0)
    {
        ch[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",ch[j]);
    }
    return 0;
}