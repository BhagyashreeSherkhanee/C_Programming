#include<stdio.h>

void print_all_numbers(int limit)
{
    int i = 0;

    for(i = 1; i <= limit; i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int number = 0;

    printf("Enter the limit : \n");
    scanf("%d",&number);

    print_all_numbers(number);

    return 0;

}