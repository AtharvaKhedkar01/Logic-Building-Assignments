//Accept number from user and check whether number is even or odd

#include<stdio.h>
#include<stdbool.h>

bool ChechEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enyer Number:-");
    scanf("%d",&iValue);
    bRet = ChechEven(iValue);
    if(bRet == true)
    {
        printf("number is EVEN");
    }
    else
    {
        printf("Number is OOD");
    }
    return 0;

}