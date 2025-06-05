//write a program which Accept number from user and display its table

#include<stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iCount = 1;
    for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
    {
        iCount = iNo * iCnt;
        printf("%d  ",iCount);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:-");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}