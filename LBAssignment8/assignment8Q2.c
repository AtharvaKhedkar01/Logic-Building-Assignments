//write a program which accept width & height of rectangle from user and calculate its area(Area = Width * Height)

#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double dAns = 0.0;
    if(fWidth <= 0)
    {
        fWidth = -fWidth;
    }
    if(fHeight <= 0)
    {
        fHeight = -fHeight;
    }
    dAns = fWidth * fHeight;
    return dAns;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width of Rectangle : ");
    scanf("%f",&fValue1);

    printf("Enter Height of Rectangle : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is : %0.4f",dRet);

    return 0;
}