#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCel = 0.0;
    dCel = ((fTemp-32)*5/9);
    return dCel;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Temperature in Celsius is %f",dRet);

    return 0;
}