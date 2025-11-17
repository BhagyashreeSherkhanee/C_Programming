#include<stdio.h>

void print_even_numbers(int no)
{
    int i = 0;

    for(i = 1; i <= no; i++)
    {
        if((i % 2) == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int number = 0;

    printf("Enter the number : \n");
    scanf("%d",&number);

    print_even_numbers(number);

    return 0;

}