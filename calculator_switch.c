#include<stdio.h>
int main()
{
    int a,b;
    float sum;
    char ch;
    printf("enter two numbers and signs(+,-,*,/) to calculate:\n ");
    scanf("%d %d %c",&a,&b,&ch);
    switch(ch)
    {
    case '+':
        sum=a+b;
        break;
        case '*':
        sum=a*b;
        break;
        case '/':
        sum=a/b;
        break;
        case '-':
        sum=a-b;
        break;
        default:
            printf("you entered other sign");
            break;
    }
    printf("result %d %c %d=%f",a,ch,b,sum);
    return 0;
}
