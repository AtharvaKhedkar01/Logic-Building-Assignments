//write a program which accepts area in square feet and convert it into square meter(1 square feet = 0.0929square meter)

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dConveter = 1;
    dConveter = ((iNo) * (0.0929));
    return dConveter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter Area in Square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Area in Square Meter is : %f",dRet);

    return 0;
}