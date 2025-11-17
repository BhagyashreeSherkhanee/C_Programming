#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int i = 0;
    
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    } 

    for(i = iStart; i <= iEnd; i++)
    {
        printf("%d\t",i);
    }

    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the staring point : \n");
    scanf("%d",&iValue1);

    printf("Enter the End point : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}