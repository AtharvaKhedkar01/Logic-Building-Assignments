//write a program which accepts temperature in Fahrenheit and convert it into celsius(1 celsius = (Fahrenheit - 32) * (5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dConveter = 1;
    dConveter = ((fTemp - 32) * (5.0/9.0));
    return dConveter;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter Temperature : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The Temperature in Celsius is : %f",dRet);

    return 0;
}