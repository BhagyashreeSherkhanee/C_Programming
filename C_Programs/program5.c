#include<stdio.h>

int main()
{
    int i = 0; int j = 0; int ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&i);

    printf("Enter Second number : \n");
    scanf("%d",&j);

    ans = i + j;            //Bussiness Logic

    printf("Addition is : %d\n",ans);

    return 0;
}