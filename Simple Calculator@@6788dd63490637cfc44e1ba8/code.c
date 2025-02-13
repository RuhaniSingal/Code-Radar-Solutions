#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    char c;
    scanf("%c",&c);
    switch(c)
    {
        case('+'):
        int sum=a+b;
        printf("%d",sum);
        break;
        case('-'):
        int diff=a-b;
        printf("%d",diff);
        break;
        case('*'):
        int prod=a*b;
        printf("%d",prod);
        break;
        case ('/'):
        int div=a/b;
        printf("%d",div);
        break;
        default:
        printf("error");
    }
    return 0;
}