#include<stdio.h>
void alternating_triangle(int n){
    for(int i=1; i<=n; i++){
        for(int k=1; k<=i; k++){
            if(i%2!=0){
                if(k%2!=0){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            else{
                if(k%2!=0){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    alternating_triangle(n);
    return 0;
}