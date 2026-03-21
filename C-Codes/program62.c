#include<stdio.h>

int main()
{
    int iNo = 7236;
    int iDigit = 0;

    printf("______________________________________________\n");
    printf("Original value of iNo is :%d\n",iNo);

    printf("______________________________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is :%d\n",iNo);

    printf("______________________________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is :%d\n",iNo);

    printf("______________________________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is :%d\n",iNo);

    printf("______________________________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is :%d\n",iNo);
    printf("______________________________________________\n");

    return 0;
}