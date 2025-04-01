void swapStrings(char str1[], char str2[]){
    char temp[100];
    strcpy(temp,str2);
    strcpy(str2,str1);
    strcpy(str1,temp);
}

void bubbleSort(int arr[][100], int n){
    for(int i=0; i<(n-1); i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(arr[i],arr[j])>0){
                swapStrings(arr[i],arr[j]);
            }
        }
    }
}
void printArray(int arr[][100], int n){
    for(int i=0; i<n; i++){
        printf("%s\n",arr[i]);
    }
}