#include<stdio.h>
void lagest_smallest(int arr[], int n){
    int max= arr[0],min=arr[0];
    for(int i=0;i<n; i++){
        if(arr[i]>max){
            max= arr[i];
        }
        if(arr[i]<min){
            min= arr[i];
        }
    }
    printf("%d %d",min,max);
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    largest_smallest(arr,N);
    return 0;
}