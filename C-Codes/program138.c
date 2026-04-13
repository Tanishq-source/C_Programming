#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// < O(n)
 bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iCount++;
            break;
        }
    }

    if(iCount > 0)
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
    int iLength = 0, iCnt = 0,bRet = false,iValue = 0;
    IPTR iPtr = NULL;
    
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the Values :\n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the value to search :\n");
    scanf("%d",&iValue);
    
    // Step 2 : Use the memory 
    bRet = LinearSearch(iPtr,iLength,iValue);

    if(bRet == true)
    {
      printf("%d is present in the data",iValue);
    }
    else
    {
        printf("%d is not present in data",iValue);
    }

    // Step 3 : Free the memory 
    free(iPtr);

    return 0;
}