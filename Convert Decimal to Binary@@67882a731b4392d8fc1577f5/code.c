#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch[50]='\0';
    while(n>0)
    {
        char k=(char)n%2;
        strcat(ch,k);
        n=n/10;
    }
    printf("%d",ch);
}