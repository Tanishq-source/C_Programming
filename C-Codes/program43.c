// Input1 12 Input2 4  Divisible
// Input1 12 Input2 8  Not Divisible
#include<stdio.h>


int main()
{
  int iValue1 = 0,iValue2 = 0;

  printf("Enter first number :\n");
  scanf("%d",&iValue1);

  printf("Enter second number :\n");
  scanf("%d",&iValue2);

  if(iValue1 % iValue2 == 0)
  {
    printf("It is Divisible\n");
  }
  else
  {
    printf("It is not Divisible\n");
  }

  return 0;  
}