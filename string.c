#include<stdio.h>
int main()
{
    char s[20];
    int i,count=0;
    printf("enter your sentence : ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    printf("the string has %d words with whitespace",i);
    return 0;

}
