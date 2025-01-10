//Write a C program to create an array of n elements using static memory allocation to print all Armstrong numbers from given array.
// Armstrong num is a num i.e is equal to the sum of its own digits each raised to the power of the num of digits.(eg 153)
#include<stdio.h>
void main()
{
    int index, outerLoop, innerLoop, numElements, power, ans, ansSum,  temp, remainder;
    int i_arr[100];
    printf("How Many Elements Do You Want To Enter In Array : \n");
    scanf("%d", &numElements);

    // Inputs In
    printf("Enter Array Elements : \n");
    for(index = 0 ; index < numElements ; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    printf("Armstrong Numbers In Array : ");

    // checking whether Array Elements are Armstrong nums
    for(outerLoop = 0 ; outerLoop < numElements ; outerLoop++)
    {
        temp = i_arr[outerLoop];
        ansSum = 0;
        power = 0;
        // Finding how many times the number should be multiplied by itself
        while(temp > 0)
        {
            temp /= 10;
            power++;
        }

        temp = i_arr[outerLoop];

        while(temp > 0)
        { 
            ans = 1;
            remainder = temp % 10;
            for(innerLoop = 0 ; innerLoop < power ; innerLoop++)
            {
                ans *= remainder;
            }
            ansSum += ans;
            temp /= 10;
        }
        if(ansSum == i_arr[outerLoop])
        {
            printf("%d ", i_arr[outerLoop]);
        }
    }
}