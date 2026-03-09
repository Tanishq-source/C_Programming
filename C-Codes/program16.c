/////////////////////////////////////////////////////////////////////////
//
// Required Header Files 
//
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>                               // for Input Output 
#include<stdbool.h>                             // for bool Datatype

/////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckEvenOdd
//  Description :   It is used to check even or odd
//  Input :         Integer 
//  Output :        Boolean
//  Author :        Tanishq Nitin Chandole
//  Date :          10/10/2025
//
/////////////////////////////////////////////////////////////////////////


bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    
    if(iRem == 0)
    { return true;}
    else
    { return false;}
}

/////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
/////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    { printf("%d is Even number\n",iValue);}
    else
    { printf("%d is Odd Number\n",iValue);}

    return 0;
}