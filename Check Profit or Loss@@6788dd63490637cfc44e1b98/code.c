#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(cp>sp)
    {
        printf("Loss");

    }
    else if(sp>cp)
    {
        printf("Profit");
    }
    else{
        printf("NP Profit No Loss");
    }
    return 0;
}