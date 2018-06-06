#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter the number");
    scanf("%d",&n);
    int a[n];
    printf("enter the vlaues of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the values ascending");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d\n",a[i]);
    }
    return 0;
}
