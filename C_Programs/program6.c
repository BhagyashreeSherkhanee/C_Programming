#include<stdio.h>

int Add(int a, int b)
{
    int Sum = 0;
    Sum = a + b;            //Bussiness Logic
    return Sum;
}

int main()
{
    int i = 0; int j = 0; int ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&i);

    printf("Enter Second number : \n");
    scanf("%d",&j);

    ans = Add(i , j);

    printf("Addition is : %d\n",ans);

    return 0;
}