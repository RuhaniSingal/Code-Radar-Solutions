#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    if(isupper(ch))
    {
        printf("Uppercase");
    }
    else if(islower(ch))
    {
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}