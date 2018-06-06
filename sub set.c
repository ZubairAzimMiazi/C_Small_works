#include<stdio.h>
int main()
{
    int i,j,l,count;
    printf("how many inputs you want to input:");
    scanf("%d",&l);
    int n[l];
    count=l;
    printf("enter your inputs for subset:\n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("your subsets:\n");
     for(i=0;i<l;i++)
     {
        printf("{%d}\n",n[i]);
     }
     for(i=0;i<l;i++)
     {
         printf("{%d %d}\n",n[0],n[i]);
     }
     for(i=0;i<l-1;i++)
     {
        printf("{%d %d}\n",n[1],n[i+1]);
     }
  for(i=0;i<l;i++)
     {
        printf("{%d %d}\n",n[2],n[i]);
     }
  for(i=0;i<l;i++)
     {
        printf("{%d %d}\n",n[3],n[i+1]);
     }
  for(i=0;i<l;i++)
     {
        printf("{%d %d %d}\n",n[i],n[i+1],n[i+2]);
     }

    return 0;
}
