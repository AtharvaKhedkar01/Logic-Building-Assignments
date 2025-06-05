//write a program which accept number from user and print first 5 multiples of N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = iNo ; iCount < 5 ; iCnt++)
    {
        if ((iCnt % iNo) == 0)
        {
            printf("%d  ",iCnt);
            iCount++;
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number:-");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}