/*
    START
        Accept number ans store as No 
        Divide no by 2
        If the reaminder is 0
            then display as Even
        otherwise
            Display as Odd
    STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is Even number");
    }
    else
    {
        printf("It is Odd number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;

}