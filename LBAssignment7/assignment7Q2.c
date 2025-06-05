//Accept amount in US doller and return its corresponding value in Indian Currency. Consider 1$ as 70 ruppes.

#include<stdio.h>

int DollerToINR(int iNo)
{
   if(iNo <= 0)
   {
        return;
   }
   int iDoller = iNo * 70;
   return iDoller;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}