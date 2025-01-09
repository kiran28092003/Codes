//Write a C program to create an array of n elements using staticmemory allocation to accept position from user and delete an element at given position from an array.
#include<stdio.h>
void main()
{
    int index, numElements, delPosition;
    int i_arr[100];
    printf("How Many Elements Do You Want To Enter In Array : \n");
    scanf("%d", &numElements);


    // Input In
    printf("Enter Array Elements : \n");
    for(index = 0 ; index < numElements ; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    // Getting position to be deleted from user
    printf("\nEnter postion to be Deleted (0 - %d)\n", numElements - 1);
    scanf("%d", &delPosition);

    // Input Out
    printf("\nArray Elements Before Deletion : \n");
    for(index = 0 ; index < numElements ; index++)
    {
        printf("%d ", i_arr[index]);
    }

    // Deleting The Postion Entered by user
    for(index = delPosition ; index < numElements ; index++)
    {
        i_arr[index] = i_arr[index + 1];
    }

    // Array with the desired position deleted
    printf("\nArray Elements After Deletion : \n");
    for(index = 0 ; index < numElements - 1 ; index++)
    {
        printf("%d ", i_arr[index]);
    }
}