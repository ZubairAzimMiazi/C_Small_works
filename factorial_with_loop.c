#include<stdio.h>
int main()
{
    int n,i;
    long int fac=1;
    char c;
    do{
        printf("enter a number : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fac*=i;
    }
    printf("%ld",fac);
    printf("\n Enter y(yes) to calculate again : ");
    fflush(stdin);
    scanf("%c",&c);
    }while(c=='y' || c=='Y');
    return 0;
}
