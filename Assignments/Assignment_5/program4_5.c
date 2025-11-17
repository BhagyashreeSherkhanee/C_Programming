#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("It is positive number");
    }
    else if(num < 0)
    {
        printf("It is negative number");
    }
    else
    {
        printf("It is zero");
    }
}

int main()
{
    int number;

    printf("Enter the number : \n");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}