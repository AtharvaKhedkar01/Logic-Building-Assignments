//write a program which returns difference between Even Factorial And Odd factorial of given Number

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iCount = 0;
    int iCount1 = 1;
    int iCount2 = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0) 
        {
            iCount1 = iCount1 * iCnt;
        } 
        else
        {
            iCount2 = iCount2 * iCnt;
        } 
    }
    iCount = iCount1 - iCount2;   
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("The Factorial Difference of Number is : %d",iRet);

    return 0;
}