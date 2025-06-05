//write a program which accept one number from user and print that number of even number on screen

#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 1 ; iCount < iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\n",iCnt);
            iCount++;
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :-");
    scanf("%d",&iValue);
    printf("Even Numbers Are :- \n");
    PrintEven(iValue);
    return 0;
}