//Write a C program to create an array of n elements using static memory allocation from user and replace all odd numbers by their reverse number.
#include<stdio.h>
void main() 
{
    int index, numElements, temporary, reversed, remainder;
    int i_arr[100];
    printf("How many elements do you want to enter in array : \n");
    scanf("%d", &numElements);
    printf("Enter array elements : \n");

    // Inputs in
    for(index = 0 ; index < numElements ; index++)
    {
        scanf("%d", &i_arr[index]);
    }    

    // reversing only positions having odd elements inside array
    for(index = 0 ; index < numElements ; index++)
    {
        if(i_arr[index] % 2 != 0)
        {   
            reversed = 0;
            temporary = i_arr[index];
            while(temporary > 0)
            {
                remainder = temporary % 10;
                reversed = reversed * 10 + remainder;
                temporary /= 10;
            }
            i_arr[index] = reversed;
        }
    }

    // Inputs Out with positions having odd reversed
    printf("Array with positions having odd elements reversed is : \n");
    for(index = 0 ; index < numElements ; index++)
    {
        printf("%d ", i_arr[index]);
    }
}