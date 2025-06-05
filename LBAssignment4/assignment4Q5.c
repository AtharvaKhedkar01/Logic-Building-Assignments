//Write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSum1 = 0;
    int iSum2 = 0;
    int iSum = 0;
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    printf("%d\n",iSum1);
    printf("%d\n",iSum2);
    iSum = iSum1 - iSum2;
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:- ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Factors & Non Factors is:- %d",iRet);

    return 0;
}