//write a program which accepts distance in kilometre and convert it into meter(1kilometer = 1000meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iConveter = 0;
    iConveter = iNo * 1000;
    return iConveter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The Distance in Meter is : %dm",iRet);

    return 0;
}