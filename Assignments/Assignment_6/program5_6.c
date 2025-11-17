#include<stdio.h>

float Percentage(int Total, int Marks)
{
    if(Total == 0)
    {
        return 0;
    }
    if(Marks == 0)
    {
        return 0;
    }

    float fPercent = 0.0f;

    fPercent = (float)Marks / (float)Total * 100;

    return fPercent;

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet =0.0f;

    printf("Enter the total marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %f",fRet);

    return 0;

}