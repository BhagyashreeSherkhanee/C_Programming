#include<stdio.h>

int Factorial(int iNo)
{
    int i = 0;
    int iMulti = 1;

    for(i = 1; i <= iNo; i++)
    {
        iMulti = iMulti * i;
    }

    return iMulti;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}