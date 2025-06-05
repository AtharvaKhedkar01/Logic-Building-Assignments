//write a program which Accept number from user and display its table in Reverse

#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iCount = 1;
    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
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

    TableRev(iValue);

    return 0;
}