#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter the first value - ");
    scanf("%d",&a);

    printf("enter the second value - ");
    scanf("%d",&b);

    printf("enter the third value- ");
    scanf("%d",&c);

    if(a<b&&a<c)
    {
        printf("the minimum value is %d",a);
    }
    else if(b<a&&b<c)
    {
        printf("the minimum value is %d",b);
    }
    else {
            printf("the minimum value is %d",c);
    }
    return 0;

}
