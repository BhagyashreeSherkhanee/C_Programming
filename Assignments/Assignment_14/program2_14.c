#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int ino)
{
    int iDigit = 0;

    while(ino != 0)
    {
        iDigit = ino % 10;
        ino = ino / 10;

        if(iDigit == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("There is zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;

}