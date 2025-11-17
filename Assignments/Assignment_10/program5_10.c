#include<stdio.h>

double SquareMeter(int iNo)
{
    double dMeter = 0.0;
    dMeter = ((double)iNo * 0.0929);
    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the Area in Square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The area in Square meter is %f",dRet);

    return 0;
}