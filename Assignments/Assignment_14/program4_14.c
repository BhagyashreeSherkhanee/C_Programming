#include<stdio.h>

int CountFrequency(int iNo)  
{
    int iDigit = 0;
    int iFrequency = 0;

    while( iNo != 0)
    {
        iDigit = iNo % 10;  
        iNo = iNo / 10;     

        if( iDigit == 4)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);

    printf("Frequency of 4 is %d",iRet);

    return 0;
}