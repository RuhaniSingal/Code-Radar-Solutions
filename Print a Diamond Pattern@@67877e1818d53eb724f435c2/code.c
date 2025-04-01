#include<stdio.h>
void diamond_pattern(int n){
    //upper triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }
        for(int l=1; l<=(i-1); l++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    diamond_pattern(n);
    return 0;
}
