#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=1&&x<=10000000)
    {
        if(x%2==0)
            printf("%d %d",x,x+2);
        else
            printf("%d %d",x,x+1);
    }
    else
        printf("Wrong number");
}
