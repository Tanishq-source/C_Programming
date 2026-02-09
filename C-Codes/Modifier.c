#include<stdio.h>
int main()
{
    int i = 10;
    short int j = 20;
    long int k = 30;

    printf("size of integer is :%ul\n",sizeof(i));
    printf("size of integer is :%ul\n",sizeof(j));
    printf("size of integer is :%ul\n",sizeof(k));

    return 0;
}