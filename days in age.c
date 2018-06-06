#include<stdio.h>
int main()
{
    int days1,months,years,days2,days3;
    printf("enter the age of yous in days : ");
    scanf("%d",&days1);
    years=days1/365;
    months=((days1-(years*365))/30);
    days2=(days1-((years*365)+(months*30)));
    days3=(days1-(years*365));
    if(years!=0 && months>=1)
    {
            printf("your age is %d ano(s) %d mas(es) %d dia(s)",years,months,days2);
    }
    else
        printf("your age is %d ano(s) %d dia(s)",years,days3);

    return 0;
}
