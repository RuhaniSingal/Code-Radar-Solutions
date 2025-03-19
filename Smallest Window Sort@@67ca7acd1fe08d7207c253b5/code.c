#include<stdio.h>
int findUnsortedSubarray(int arr[],int n)
{
    int left=-1,right =-1;
    for(int i=0; i<(n-1); i++)
    {
        if(arr[i]> arr[i+1])
           {
                left = i;
                break;
           }     
    }
    for(int j=(n-1); j>0; j--)
    {
        if(arr[j]< arr[j-1])
        {
            right= j;
            break;
        }
    }
    
    int min_value= arr[left], max_value= arr[left];
    for(int k=left; k<=right; k++)
    {
        if(arr[k] < min_value){
            min_value = arr[k];
        }
        if(arr[k] > max_value){
            max_value = arr[k];
        }
    }

    
    if (left == -1)
    return 0;
    

    while(left>0 && arr[left-1]>min_value)
    {
        left--;
    }
    while(right<(n-1) && arr[right+1]< max_value)
    {
        right++;
    }

    int length_of_subarray = right-left+1;
    printf("%d",length_of_subarray);
    return 0;
}