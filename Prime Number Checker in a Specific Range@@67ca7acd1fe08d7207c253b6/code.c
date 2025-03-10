int isPrime(int k)
{
    int count=0;
    if(k<2)
    {
        return -1;
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
    return -1;
}
int printPrimesInRange(int a,int b)
{
    int j=0;
    for(int i=a;i<=b;i++)
    {
        int prime= isPrime(i);
        if(prime!=-1)
        {
        printf("%d ",isPrime(i));
        j=j+1;
        }
    }
    if(j==0)
    {
        printf("No prime numbers");
    }
    return 0;
}