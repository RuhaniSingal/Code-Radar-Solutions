int isPrime(int k)
{
    int count=0;
    for(int i=1;i<=k;i++)
    {
        if(k%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return k;
    }
}
int printPrimesInRange(a,b)
{
    for(int i=a;i<=b;i++)
    {
        printf("%d ",isPrime(i));
    }
    return 0;
}