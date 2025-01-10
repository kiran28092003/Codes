// Write a C program to create an array of n elements using static memory allocation to print all unique elements in an array.
#include <stdio.h>
void main()
{
    int i, j, numElements, count;
    int i_arr[100];
    printf("How Many Elements Do You Want To Enter Inside Array : \n");
    scanf("%d", &numElements);

    printf("Enter Array Elements : \n");
    for(i = 0 ; i < numElements ; i++)
    {
        scanf("%d", &i_arr[i]);
    }

    printf("Unique Array Element Are...\n");
    for(i = 0 ; i < numElements ; i++)
    {
        count = 1;
        
        // Check for duplicates
        for(j = 0 ; j < numElements ; j++)
        {
            // If a match is found at a different index
            if(i != j && i_arr[i] == i_arr[j])
            {
                count++;
            }
        }
        // If count is 1, the element is unique        
        if(count == 1)
        {
            printf("%d\n", i_arr[i]);
        }
    }

}