#include<stdio.h>
void printPallindrome(int n){
    for(int i=1; i<=n; i++){
        int temp=0;
        int temp2=0;
        int mid = ((2*i-1)/2)+ 1;
        for(int j=1; j<=(n-i); j++){
            printf(" ");
        }
        for(int k=1 ; k<= (2*i)-1 ; k++)
        {
            if(k<=mid){
                temp= temp+1;
                printf("%d",temp);
                temp2= temp;
            }
            else{
                temp2= temp2 - 2;
                printf("%d",temp2);
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