#include "SumOfDigits.h"

SumOfDigits::SumOfDigits()
{
    //ctor
}

SumOfDigits::~SumOfDigits()
{
    //dtor
}

int SumOfDigits::SOD(int x)
{
    int sum=0, remainder ,num ;

    num=x;

    while(num!=0)
    {
        remainder= num%10;

        sum=sum+remainder;

        num=num/10;
    }

    return sum;

}
