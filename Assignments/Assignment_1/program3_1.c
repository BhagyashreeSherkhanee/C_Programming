//Q3. Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
    int iValue = 0;

    iValue = 5;
    while(iValue < 6)
    {
        printf("%d",iValue);
        iValue++;
    }
}
int main()
{
    Display();

    return 0;
}

/* Output: 
           5
           4
           3
           2
           1
*/