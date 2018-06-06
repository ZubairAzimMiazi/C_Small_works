#include<stdio.h>
int main()
{
    int i,n,a,sum=0;
    printf("enter a number you want to multiply");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum+=n;
        printf("\n %d",sum);
    }
    return 0;

}
