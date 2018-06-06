#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n*n;
    b=n*n*n;
    if(n>=1&&n<=1000)
        printf("%d %d %d",n,a,b);
        else printf("1<N<1000");
}
