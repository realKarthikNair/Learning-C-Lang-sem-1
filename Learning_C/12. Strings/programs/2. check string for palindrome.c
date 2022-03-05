// Write a program to check if a string is palindrome or not

#include <stdio.h>
#include <string.h>

int main()
{
    int i=0, j=0, flag=1;
    char text[100];
    printf("Enter string: ");
    fgets(text, 100, stdin);
    int len=strlen(text);
    
    for (i=(len-2); i>=0; i--)
    {
        if(text[i]!=text[j])
        {
            flag=0; i=-1;
        }j++;
    }
    if(flag==1)
    {
        printf("Text is palindrome\n");
    }
    else
    {
        printf("Text is not palindrome\n");
    }
}
