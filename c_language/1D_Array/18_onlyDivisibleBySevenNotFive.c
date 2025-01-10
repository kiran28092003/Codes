//Write a C program to create an array of n elements using static memory allocation from user and print only those elements which are divisible by 7 and not divisible by 5.
#include<stdio.h>
void main() 
{
    int index, numElements, flag = 0;
    int i_arr[100];
    printf("How many elements do you want to enter in side array : \n");
    scanf("%d", &numElements);
    
    printf("Enter array elements : \n");
    
    // Inputs in
    for(index = 0 ; index < numElements ; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    // Printing elements which are divisible by 7 not by 5
    printf("Elements are : ");
    for(index = 0 ; index < numElements ; index++)
    {
        if(i_arr[index] % 7 == 0 && i_arr[index] % 5 != 0)
        {
            printf("%d ", i_arr[index]);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("No elements divisible by 7 but not by 5 found.\n");
    }
}