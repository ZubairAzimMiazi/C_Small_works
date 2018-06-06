#include<stdio.h>
int main()
{
    char s[100],w[100],d[100];
    int i,p;
    printf("enter the string ");
    gets(s);
    printf("enter the word you want to compare : ");
    gets(w);
    printf("enter the word you want to replace with: ");
    gets(d);
    for(i=0;i<strlen(s);i++)
    {
        if(strcmp(s[i],w)==0)
            strcpy(s[i],d[i]);
            printf("%s",s[i]);

    }
    return 0;
}
