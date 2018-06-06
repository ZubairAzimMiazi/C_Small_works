#include<stdio.h>>
int main()
{
    int wday;
    printf("enter a week number to know the weekday witin 0-6 : ");
    scanf("%d",&wday);
    switch(wday)
    {
    case 0:
        printf("saturday");
        break;
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thursday");
        break;
        case 6:
        printf("friday");
        break;
        default:
            printf("you entered a wrong weekday number");
            break;


    }
    return 0;
}
