//Write a C program to create an array of n elements using static memory allocation from user and print second maximum element in given array.
#include<stdio.h>
void main()
{
    int index, numElements, firstMax = -2147483648, secondMax;
    int i_arr[100];
    printf("How Many Elements Do You Want To Enter Inside Array : \n");
    scanf("%d", &numElements);

    printf("Enter Array Elements : \n");
    
    // Inputs In
    for(index = 0 ; index < numElements ; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    // Code For 2nd Max
    for(index = 0 ; index < numElements ; index++)
    {
        if(firstMax < i_arr[index])
        {
            secondMax = firstMax;
            firstMax = i_arr[index];
        }
    }

    // 2nd Max Printed
    printf("2nd Max = %d\n", secondMax);
}