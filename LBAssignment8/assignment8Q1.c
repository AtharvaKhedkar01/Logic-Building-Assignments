//write a program which accept radius of circle from user and calculets its area consider value of PI as 3.14(Area = PI*Radius*Radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dAns = 0.0;
    if(fRadius <= 0)
    {
        fRadius = -fRadius;
    }
    dAns = PI * fRadius * fRadius;
    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius of Circle : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %0.4f",dRet);

    return 0;
}