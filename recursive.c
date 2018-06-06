#include<stdio.h>
int re(int a);
int main()
{
    int num,result;
    printf("input number:");
    scanf("%d",&num);
    result=re(num);
    printf("Output sum of digits = %d",result);
    return 0;
}
int re(int num)
{
    int i,j,sum=0;
    if(num!=0)
    {
        return(num%10+re(num/10));
    }
    else
        return 0;
}

