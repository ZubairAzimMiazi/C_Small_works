#include<stdio.h>
int main()
{
    int a[100],b[100];
    printf("enter a number to check it's palindrome - ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");
    return 0;
}
