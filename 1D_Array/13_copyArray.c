//Write a C program to create an array of n elements using static memory allocation to copy the elements of one array into another array.
#include<stdio.h>
void main()
{
    int numElements, index;
    int arr[100], copyArr[100];

    printf("How Many Elements Do You Want To Enter Inside Array : \n");
    scanf("%d", &numElements);

    printf("Enter Array Elements : \n");
    // Inputs In
    for(index = 0 ; index < numElements ; index++)
    {
        scanf("%d", &arr[index]);
    }

    // Copying Main Array (arr[]) into Another Array (copyArr[])

    for(index = 0 ; index < numElements ; index++)
    {
        copyArr[index] = arr[index];
    }

    // Printing Copied Array 

    printf("Copied Array : \n");
    for(index = 0 ; index < numElements ; index++)
    {
        printf("%d ", copyArr[index]);
    }

}