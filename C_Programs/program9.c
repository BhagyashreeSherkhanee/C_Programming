/*
    Step 1: Understand the problem statement
    Step 2: Write the algorithm
    Step 3:Decide the programming language
    Step 4:Write the program
    Step 5:Test the program
*/

/*
    Algorithm
    START
        Accept first number as No1
        Accept Second number as No2
        If the input is negative then convert it into positive
        Perform addition of No1 & No2
        Display the addition on screen
    STOP
*/

#include<stdio.h>

int AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;

    //Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;           //Bussiness Logic

    return fSum;
}

int main()
{
    float fValue1 = 0.0f; float fValue2 = 0.0f; float fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1 , fValue2);

    printf("Addition is : %f\n",fRet);

    return 0;
}