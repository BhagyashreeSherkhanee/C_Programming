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

///////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Bhagyashree Kirankumar Sherkhane
//  Date :          09/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int AdditionTwoNumbers(
                          float fNo1,                           //First Input
                          float fNo2                            //Second Input
                      )
{
    float fSum = 0;                                             //To Store the result

    if(fNo1 < 0.0f)                                             //Updator
    {
        fNo1 = -fNo1;
    }
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                        //Bussiness Logic

    return fSum;
}   //AdditionTwoNumbers

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//
///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f; float fValue2 = 0.0f;                //To accept user input
    float fRet = 0.0f;                                         //To store the result

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1 , fValue2);              //Method call

    printf("Addition is : %f\n",fRet);                         

    return 0;
}   //End of main

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled by the application
//
//  Input1 : 10.5              Input2 : 3.2                 Output : 13.7
//  Input1 : -10.5             Input2 : 3.2                 Output : 13.7
//  Input1 : 10.5              Input2 : -3.2                Output : 13.7
//  Input1 : -10.5             Input2 : -3.2                Output : 13.7
//  Input1 : 10.5              Input2 : 0.0                 Output : 10.5
//
///////////////////////////////////////////////////////////////////////////////////////