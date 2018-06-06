#include<stdio.h>
int main()
{
    int i,num,f=1;
    printf("enter the number of factorial: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        {
            f=f*i;
        }
    printf("the factorial of %d is %d",num,f);
    return 0;
}
