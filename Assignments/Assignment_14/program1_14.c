#include<stdio.h>

void DisplayDigits(int ino)
{
    int iDigit = 0;
    
    if(ino < 0)
    {
        ino = -ino;
    }

    while(ino != 0)
    {
        iDigit = ino % 10;
        ino = ino / 10;

        printf("%d\n",iDigit);


    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}