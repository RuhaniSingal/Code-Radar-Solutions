#include<stdio.h>
int bubbleSort(int arr[],int n){
    int swapped=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j< (n-i-1); j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
    }
    // if(!swapped){
    //     printf("Array already sorted");
    // }

}

int printArray(int arr[],int n)
{
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}