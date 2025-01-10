//Write a C program to create an array of n elements using static memory allocation to Find the two Elements such that their Sum is Closest to given number
#include<stdio.h>
void main()
{
    int i, j, givenNum, numElements, sum, leastDifference = 2147483647, num1, num2;
    int i_arr[100];
    printf("How Many Elements Do You Want To Enter Inside Array : \n");
    scanf("%d", &numElements);

    printf("Enter Array Elements : \n");
    for(i = 0 ; i < numElements ; i++)
    {
        scanf("%d", &i_arr[i]);
    }


    printf("Give A Number : \n");
    scanf("%d", &givenNum);

    // Find two elements with the sum closest to the given number
    for(i = 0 ; i < numElements ; i++)
    {
        for(j = i + 1 ; j < numElements ; j++)
        {
            sum = i_arr[i] + i_arr[j];
             // Check if the current sum is greater than the given number
            if(sum > givenNum)
            {
                // Check if the difference is smaller than the current least difference
                if(leastDifference > sum - givenNum)
                {
                    leastDifference = sum - givenNum; 
                    num1 = i_arr[i];
                    num2 = i_arr[j];
                }
            }
            else
            {
                // Check if the difference is smaller than the current least difference
                if(leastDifference > givenNum - sum)
                {
                    leastDifference = givenNum - sum; 
                    num1 = i_arr[i];
                    num2 = i_arr[j];
                }
            }
        }
    }
    printf("Element 1 : %d\n", num1);
    printf("Element 2 : %d\n", num2);
}