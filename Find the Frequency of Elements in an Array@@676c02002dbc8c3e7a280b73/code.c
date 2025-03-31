#include<stdio.h>
void element_frequency(int arr[], int n)
{
    int visited[n];
    for(int i=0; i<n;i++)
    {
        if(visited[i]){
            continue;
        }   
        int freq=1;
        for(int j= i+1; j<n; j++){
            if(arr[i]==arr[j])
            {
                freq++;
                visited[j]=1;
            }

        }
        if(freq>0)
        {
            printf("%d %d",arr[i],freq);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    element_frequency(arr,n);
    return 0;
}