#include<stdio.h>
void even_odd(int arr[], int n){
    int even=0,odd=0;
    for(int i=0; i<n; i++){
        if (arr[i]%2==0){
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d",even,odd);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    even_odd(arr, n);
    return 0;
}