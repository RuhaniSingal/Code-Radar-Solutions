#include<stdio.h>
int isPrime(int n){
         int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
int main(){
    int k;
    scanf("%d",&k);
    isPrime(k);
    return 0;
}