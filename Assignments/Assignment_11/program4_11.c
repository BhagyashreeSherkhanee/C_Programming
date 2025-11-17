#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int i = 0;
    int iSum = 0;
    
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    } 

    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range");
        exit(1);
    }
    else
    {
        for(i = iStart; i <= iEnd; i++)
        {
            if((i % 2) == 0)
            {
                iSum = iSum + i;
            }
            
        }
        return iSum;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the staring point : \n");
    scanf("%d",&iValue1);

    printf("Enter the End point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition of all numbers is %d",iRet);

    return 0;
}