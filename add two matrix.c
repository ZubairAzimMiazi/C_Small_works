#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n][n],b[n][n],sum[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the first matrix is:\n");
     for(i=0;i<n;i++)
    {
        if(i==1||i==2)
            printf("\n\n");
        for(j=0;j<n;j++)
        {
            printf("%10d",a[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nthe second matrix is:\n");
     for(i=0;i<n;i++)
    {
        if(i==1||i==2)
            printf("\n\n");
        for(j=0;j<n;j++)
        {
            printf("%10d",b[i][j]);
        }
    }
    printf("\n\nthe sum of two matrix:\n");
      for(i=0;i<n;i++)
    {
        if(i==1||i==2)
            printf("\n\n");
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%10d",sum[i][j]);
        }
    }
}
