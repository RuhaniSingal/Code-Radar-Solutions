int isPrime(int k)
{
    int count=0;
    for(int l=1;l<=k;l++)
    {
        if(k%l==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        return k;
    }
}
int printPrimesInRange(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        printf("%d ",isPrime(i));
    }
    return 0;
}