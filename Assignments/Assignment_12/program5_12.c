#include<stdio.h>
#include<stdbool.h>

bool divisible_by_5(int no)
{
    if((no % 5) == 0)
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
    int number = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&number);

    bRet = divisible_by_5(number);

    if(bRet == true)
    {
        printf("It is divisible by 5");
    }
    else
    {
        printf("It is not divisible by 5");
    }




}