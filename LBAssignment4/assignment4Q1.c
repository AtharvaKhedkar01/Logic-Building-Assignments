//Write a program which accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iCount = 1;
    if(iNo <=0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
            iCount = iCount * iCnt;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:- ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    
    printf("Multiplication of Factors is:- %d",iRet);

    return 0;
}