#include<stdio.h>

int print_natural_numbers(int no)
{
    int i = 0;
    int iSum = 0;

    for(i = 1; i <= no; i++)
    {
        iSum = iSum + i;   
    }
    return iSum;
}

int main()
{
    int number = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&number);

    iRet = print_natural_numbers(number);

    printf("Summation of natural number is %d",iRet);

    return 0;

}