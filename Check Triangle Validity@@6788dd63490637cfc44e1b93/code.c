#include<stdio.h>
#include<stdbool.h>
bool checkVal(int a,int b,int c)
{
    if(a<(b+c)&& b<(a+c) && c<(a+b))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(checkVal(a,b,c))
{
    printf("Valid");
}
else{
    printf("Invalid");
}
return 0;
}
