//Accept one number and check wether it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5) == 0)
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
    printf("Enter Number :- ");
    scanf("%d",&iValue);
    bRet = Check(iValue);
    if(bRet == true)
    {
        printf("Dividible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;

}