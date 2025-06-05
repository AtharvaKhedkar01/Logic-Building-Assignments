//write a program to find odd factorial of given number

#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iCount = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) != 0) 
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

    iRet = OddFactorial(iValue);

    printf("The Odd Factorial of Number is : %d",iRet);

    return 0;
}