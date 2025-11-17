#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    if(50 < iNo < 100)
    {
        printf("Medium");
    }
    if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}