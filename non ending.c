#include<stdio.h>
int main()
{
    int n;
    char choice;
    do{
        printf("enter the number: ");
    scanf("%d",&n);
            if(n<0)
        printf("the number is negative");
    else if(n==0)
        printf("the number is zero");
    else printf("the number is positive");
     printf("\n if you want to check again then press y:n");
     fflush(stdin);
     scanf("%c",&choice);
}while(choice=='y' || choice=='Y');
}
