#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;

    float fRadi = 0.0f;
    fRadi = PI * fRadius * fRadius;
    return fRadi;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Radius of Circle is %f",dRet);

    return 0;
}