#include<stdio.h>
void pyramid_pattern(int n){
    for(int i=1; i<=n; i++){
        int temp=1;
        //print spaces
        for(int j=1; j<=(n-i); j++){
            printf(" ");
        }
        //print numbers
        for(int k=1; k<=(2*i-1); k++){
            if(k%2!=0){
                printf("%d",temp);
                temp++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    pyramid_pattern(n);
    return 0;
}