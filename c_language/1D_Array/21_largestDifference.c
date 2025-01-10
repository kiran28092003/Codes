//Write a C program to create an array of n elements using static memory allocation to Find 2 Elements in the Array such that difference between them is Largest.
// Hint : difference between min and max elements inside array
#include<stdio.h>
void main()
{
    int index, numElements, max = -2147483648, min = 2147483647;
    int i_arr[100];
    printf("How Many Elements Do You Want To Enter Inside Array : \n");
    scanf("%d", &numElements);

    printf("Enter Array Elements : \n");

    // Inputs In
    for(index = 0 ; index < numElements ; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    // Finding Min & Max Elements
    for(index = 0 ; index < numElements ; index++)
    {
        if(max < i_arr[index])
        {
            max = i_arr[index]; // updating max till we get max
        }
        if(min > i_arr[index])
        {
            min = i_arr[index]; // updating min till we get min
        }
    }

    // printing largest difference
    printf("Maximum : %d\nMininum : %d\nDifference : %d\n", max, min, max - min);
}