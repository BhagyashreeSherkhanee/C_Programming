#include<stdio.h>

void CheckEvenOdd(int num)
{
    if((num % 2) == 0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }
}

int main()
{
    int number;

    printf("Enter the number : \n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}