//write a program to fint factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iCount = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iCount = iCount * iCnt;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:-");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is:-%d",iRet);

    return 0;
}