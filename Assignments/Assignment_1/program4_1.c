//Q4. Accept one number abd check whether it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}

/* Output:
Enter the number : 5
        Divisible by 5

Enter the number :11
        Not Divisible by 11
*/