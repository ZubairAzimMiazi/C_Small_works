#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
        else
            continue;
    }
    printf("the mun of the even numbers is = %d",sum);
    return 0;
}
