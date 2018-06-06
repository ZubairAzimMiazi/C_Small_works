#include<stdio.h>
int main()
{
    int i,sum=0;
    char ch[100];
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='o'||ch[i]=='O'||ch[i]=='i'||ch[i]=='I'||ch[i]=='u'||ch[i]=='U')
            ++sum;
    }
    printf("there are %d vowels in the string",sum);
    return 0;
}
