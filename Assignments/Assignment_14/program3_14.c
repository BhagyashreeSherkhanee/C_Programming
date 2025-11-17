#include<stdio.h>

int CountTwo(int ino)
{
    int iDigit = 0;
    int iFrequency = 0;

    while(ino != 0)
    {
        iDigit = ino % 10;
        ino = ino / 10;

        if(iDigit == 2)
        {
            iFrequency++;
        }
    }
    return iFrequency;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}