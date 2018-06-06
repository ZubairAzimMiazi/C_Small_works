#include<stdio.h>
int main()
{
    int volume,area,da,db,h,pi=3.1416;
    printf("enter the value of D1-\n");
    scanf("%d",&da);
    printf("enter the value of D2-\n");
    scanf("%d",&db);
    printf("enter the value of height-\n");
    scanf("%d",&h);
    volume=pi*(da/2-db/2)^2*h;
    area=pi*(da/2-db/2)^2;
    printf("the area is %d\n",area);
    printf("the volume is %d\n",volume);
    return 0;
}
