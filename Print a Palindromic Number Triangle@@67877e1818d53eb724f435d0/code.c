#include<stdio.h>
void printPallindrome(int n){
    for(int i=1; i<=n; i++){
        int temp=1;
        int temp2=1;
        for(int j=1; j<=(n-i); j++){
            printf(" ");
        }
        for(int k=1 ; k<= (2*i)-1 ; k++)
        {
            int mid= ((2*i-1)/2)+ 1;
            if(k<=mid){
                printf("%d",temp);
                temp= temp+1;
                int temp2= temp;
            }
            else{
            for(int l2=mid+1; l2<=(2*i-1); l2++){
                printf("%d",temp2--);
            }
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printPallindrome(n);
    return 0;
}