#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    if(isalnum(c))
    {
        if(isdigit(c))
        {
            print("Digit");
        }
        else{
            if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {
                printf("Vowel");
            }
            else{
                printf("Consonant");
            }
        }
    }
    else
    {
        printf("Special Character");
    }
}