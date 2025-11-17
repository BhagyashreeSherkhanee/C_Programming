//Q1. Accept one number from user and print that number of * on screen

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}

/*   Output:
            *
            *
            *
            *
            *
            *
            *
            *
            *
            *
*/