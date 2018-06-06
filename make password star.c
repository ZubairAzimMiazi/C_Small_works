#include<stdio.h>
int main()
{
    int i;
    char a[10],c=' ';
    printf("enter your password");
    for(i=0;i<10;i++)
    {
        a[i]=getch();
        c=a[i];
        if(c==10)
        {
            break;
        }
        else
        printf("*");
        i++;
    }
}
