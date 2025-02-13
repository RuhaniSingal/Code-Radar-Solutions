#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    int k =n>>p;
    k&1 = 0;
    int k2=n<<p;
    printf("%d",k2);
    return 0;
}