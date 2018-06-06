#include<stdio.h>
int main()
{
    long int a,n,sum=0,i;
    printf("enter a number :");
    scanf("%ld",&n);
    for(i=0;i<=n;i++)
    {
        a=n%10;
        n/=10;
        {
            printf("digit: %ld",a);
            if(a%2==0)
                printf("\teven\n");
            else
                printf("\todd\n");
        }
        fflush(stdin);
    }

    for(i=0;i<n;i++)
    {
        a=n%10;
        n/=10;
        if(a%2==0)
        {
             sum+=1;
        }

    }
    printf("total even number is %d",sum);

    return 0;
}
