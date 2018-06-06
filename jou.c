#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("first angle: ");
    scanf("%d", &a);
    printf("second angle: ");
    scanf("%d", &b);

    c=180-(a+b);

    printf("third angle is %d and %d is %d",a,b,c);
    return 0;
}
