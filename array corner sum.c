#include<stdio.h>
int main()
 {    int sum=0;
      int a[6][6];
      int i,j;
        for(i=0;i<6;i++)
            {
                for(j=0;j<6;j++)
                     {      printf("Enter element at position [%d][%d] : ",i,j);
                            scanf("%d",&a[i][j]);
                     }
            }
        for(i=0;i<6;i++)
            {
                for(j=0;j<6;j++)
                            {
                                printf("%3d",a[i][j]);
                            }
                 printf("\n");
             }

        for(i=0,j=0;i<6;i++,j++)
                {
                             if(i==j) sum=sum+a[i][j];
                }
                   printf("SUM : %d\n",sum);
}

