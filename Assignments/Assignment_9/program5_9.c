#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEven = 1;
    int iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) == 0)
        {
            iEven = iEven * i;
        }
    }
    

    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) != 0)
        {
            iOdd = iOdd * i;
        }
    }
    
    return iEven-iOdd;


}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference of number are %d",iRet);

    return 0;
}