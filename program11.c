
/*
    Algorithm

    START
            Accept first number as no1
            Accept second number as no2
            If the input is negative then convert it into positive
            Perform Addition of no1 and no2
            Display the Addition on the screen

    STOP

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform Addition
//  Input :         Float,Float
//  Output :        Float
//  Author :        Tanishq Nitin Chandole
//  Date :          09/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,                     // First Input
                            float fNo2                      // Second Input
                        )
{
    float fSum = 0;                                         // To store the result

    if(fNo1<0.0f)                                           // Updator
    {
        fNo1  = -fNo1;
    }

    if(fNo2<0.0f)                                           // Updator
    {
        fNo2  = -fNo2;
    }
    
    fSum = fNo1 + fNo2;                                     // Business logic
                        
    return fSum;
}   // End of AdditionTwoNumbers


//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;                   // To Accept user input 
    float fRet = 0.0f;                                      // To store the result
    
    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);


    fRet = AdditionTwoNumbers(fValue1,fValue2);             // Method call

    printf("Addition is : %f\n",fRet);

    return 0;
}   // End of Main

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases Successfully Handled by the application
//  
//  Input1 : 10.5       Input2 : 3.2            Output : 13.7 
//  Input1 : -10.5      Input2 : 3.2            Output : 13.7 
//  Input1 : 10.5       Input2 : -3.2           Output : 13.7 
//  Input1 : -10.5      Input2 : -3.2           Output : 13.7 
//  Input1 : 10.5       Input2 : 0.0            Output : 13.7 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
