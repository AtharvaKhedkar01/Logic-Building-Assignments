//Write a program which accept number from user and return summation of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    if(iNo <=0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:- ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Sum of All Non Factors is:- %d",iRet);

    return 0;
}