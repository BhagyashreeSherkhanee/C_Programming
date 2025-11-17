#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }

    return 0;
}