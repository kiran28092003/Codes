//Write a C program to create an array of n elements using static memory allocation that return the positions of the        palindrome  element in array. 
#include<stdio.h>
void main()
{
    int numElements, index, temp, rem, rev;
    int i_arr[100];
    
    printf("How Many Elements To Be Entered Inside Array : \n");
    scanf("%d", &numElements);

    printf("Enter Array Elements : \n");

    // Inputs In
    for(index = 0; index < numElements; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    for(index = 0; index < numElements; index++)
    {   
        // checks whether i_arr[index] is palindrome
        temp = i_arr[index];
        rev = 0;
        while(temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if(rev == i_arr[index])
        {   
            // if yes, then prints position with the number 
            printf("Palindrome : i_arr[%d] : %d \n", index, i_arr[index]);
        }
    }
}