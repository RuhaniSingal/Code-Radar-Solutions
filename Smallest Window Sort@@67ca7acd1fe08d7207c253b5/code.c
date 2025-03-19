#include<stdio.h>
int findUnsortedSubarray(int arr[],int n)
{
    int left=-1,right =-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]> arr[i+1])
           {
                left = i;
           }     
    }
    for(int j=(n-1); j>=0; j--)
    {
        if(arr[j]< arr[j-1])
        {
            right= j;
        }
    }
    int length_of_subarray = right-left+1;
    printf("%d",length_of_subarray);
}