#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter the value of two x and y:\n");
    scanf("%d %d",&x,&y);
    printf("before swapping\nx=%d\ny=%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("after swapping\nx=%d\ny=%d",x,y);
    return 0;
}
