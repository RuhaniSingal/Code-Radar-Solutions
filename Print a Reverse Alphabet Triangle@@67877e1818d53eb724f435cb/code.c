#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        int k=65;
        for(int j=1;j<=i;j++)
        {
            printf("%c ",(char)k);
            k++;
        }
        printf("\n");
    }
    return 0;
}