#include<stdio.h>
int main()
{
    int n,i;
    printf("enter how many numbers you want to take");
    scanf("%d",&n);
    int a[n];
    printf("enter your input:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("your imputs are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
