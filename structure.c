#include<stdio.h>
struct employee
     {
         char firstname[100];
         char lastname[100];
         int dob;
         int starting;
         int salary;
     };
int main()
{
    struct employee e;
    FILE *fp;
    fp=fopen("E:\","r);
    int i;
    for(i=0;i<=5;i++)
    {
        printf("\nEmployee %d:\n",i+1);
        printf("\nFirstname:");
        gets(e.firstname);
        printf("\nLastname:");
        gets(e.lastname);
        printf("\ndob:");
        fscanf(fp,"%d",&e.dob);
        printf("\nstarting:");
        fscanf(fp,"%d",&e.starting);
        printf("\nsalary:");
        fscanf(fp"%d",&e.salary);
    }
    for(i=0;i<=5;i++)
    {
        printf("Employee %d:\n",i+1);
        printf("\nFirstname:",e.firstname);
        printf("\nLastname:",e.lastname);
        printf("\ndob",e.dob);
        printf("\ntarting:",e.starting);
        printf("\nsalary:",e.salary);
    }
    return 0;
}
