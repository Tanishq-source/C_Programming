#include<stdio.h>
int main()
{ 
    int Arr[]={11,21,51,101,111};
     
    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    //p+q;  not Allowed

    p = p+3; // Allowed

    printf("Data pointed by p is :%lu\n",*p);


    return 0;
}