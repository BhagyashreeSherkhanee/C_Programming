#include<stdio.h>

int DollarToINR(int iNo)
{
    int i = 0;
    i = iNo*70;
    return i;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
} 