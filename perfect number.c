#include<stdio.h>
int main()
{
    int num,rem,sum=0,i;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=(num-1);i++)
    {
        num%i=rem;
        if(rem==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        printf("The number is a pefect number");
    }
    else
        printf("not perfect number");
}
