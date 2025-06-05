//write a program to find even factorial of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iCount = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0) 
        {
            iCount = iCount * iCnt;
        }  
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("The Even Factorial of Number is : %d",iRet);

    return 0;
}