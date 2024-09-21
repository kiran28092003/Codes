// 4. Write a C program to create an array of n elements using static memory allocation to insert new value in the array (sorted list).
#include<stdio.h>
void main()
{
    int index, numElements, newVal, tail, temp, outerLoop, innerLoop, flag = 0;
    int i_arr[100];
    printf("How Many Elements Do You Want To Enter In Array : \n");
    scanf("%d", &numElements);

    tail = numElements;

    // Input In
    printf("Enter Sorted Array List (*Ascending) : \n");
    for(index = 0 ; index < numElements ; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    // Input Out
    printf("Array Elements Before : \n");
    for(index = 0 ; index < numElements ; index++)
    {
        printf("%d ", i_arr[index]);
    }

    printf("\nEnter New Value : \n");
    scanf("%d", &newVal);

    // checking whether new value is already present inside array
    for(index = 0 ; index < numElements ; index++)
    {
        if(i_arr[index] == newVal)
        {
            printf("%d is already present at index %d\n", newVal, index);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {

    // inserting new Value at the tail of array 
    i_arr[tail] = newVal;

    // Inserting new Value
    for(outerLoop = numElements - 1 ; outerLoop >= 0 ; outerLoop--)
    {
        for(innerLoop = numElements ; innerLoop >= 0 ; innerLoop--)
        {
            if(i_arr[outerLoop] > i_arr[innerLoop])
            {
                temp = i_arr[innerLoop];
                i_arr[innerLoop] = i_arr[outerLoop];
                i_arr[outerLoop] = temp;
            }
        }
    }

    // New value inserted array out
    printf("Array Elements After : \n");
    for(index = 0 ; index <= numElements; index++)
    {
        printf("%d ", i_arr[index]);
    }

    }
}