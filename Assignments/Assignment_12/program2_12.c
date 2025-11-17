#include<stdio.h>

int count_factors(int no)
{
    int i = 0;
    int iCount = 0;

    for(i = 1; i < (no/2); i++)
    {
        if((no % i) == 0)
        {
            iCount++;
        }       
    }
    return iCount;
}

int main()
{
    int number = 0;

    printf("Enter the number : \n");
    scanf("%d",&number);

    count_factors(number);

    printf("%d\n",count_factors(number));

    return 0;
}