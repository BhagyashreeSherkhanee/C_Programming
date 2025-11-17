#include<stdio.h>

int sum_even_numbers(int no)
{
    int i = 0;
    int iSum = 0;

    for(i = 1; i <= no; i++)
    {
        if((i % 2) == 0)
        {
            iSum = iSum + i; 
        }  
    }
    return iSum;
}

int main()
{
    int number = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&number);

    iRet = sum_even_numbers(number);

    printf("Summation of even number is %d",iRet);

    return 0;

}