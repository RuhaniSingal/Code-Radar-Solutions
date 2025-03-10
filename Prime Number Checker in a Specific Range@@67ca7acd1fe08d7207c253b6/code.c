int isPrime(int k)
{
    int count=0;
    if(k<2)
    {
        return 0;
    }
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
    return 0;
}
int printPrimesInRange(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        printf("%d ",isPrime(i));
    }
    return 0;
}