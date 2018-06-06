#include <stdio.h>
long decitobin(long n);
int main()
{
    long deci;
    printf("enter a decimal number : ");
    scanf("%ld",&deci);
    printf("the binary of %ld is %ld",deci,decitobin(deci));
  return 0;
}
long decitobin(long n)
{
    int binary=0,i=1,remainder;
    while(n!=0)
    {
        remainder=n%2;
        n=n/2;
        binary=binary+(remainder*i);
        i=i*10;
    }
    return binary;
}
