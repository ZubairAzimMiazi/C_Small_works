#include<stdio.h>
int main()
{
    int area,perimeter,r,pi=3.1416;
    printf("enter the value of radius-\n");
    scanf("%d",&r);
    area=pi*r*r;
    perimeter=2*pi*r;
    printf("the area of the circle is %d\n",area);
    printf("\nthe perimeter of the circle is %d\n",perimeter);
    return 0;
}
