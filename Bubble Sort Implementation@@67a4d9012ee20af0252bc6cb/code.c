void bubbleSort(int arr[], int n){
    for(int i=0; i<(n-1); i++){
        int temp=0;
        for(int j= i+1; j<n; j++ ){
            if(arr[i]>arr[j]){
                temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}