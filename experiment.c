#include<stdio.h>
int main()
{
  int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c||b>c&&b>a){printf("The maximum value is %d\n",a);}
    if (a<b&&a<c||b<a&&b<c||c<b&&c<a){printf("The minimum value is %d\n",a);}
}

