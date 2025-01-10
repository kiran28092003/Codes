#include<stdio.h>

void main()
{
    /*Write a C program to create an array of n elements using static 
       memory allocation to Find the two Elements such that their Sum is 
       Closest to given number*/

    int n  , i , j , arr[100] , new , diff , sum , min_diff , num1 , num2;
    

    printf("\nEnter the number of element in array = ");
    scanf("%d",&n);

    printf("Enter the array element = ");
    for (i = 0; i < n; i++)
    {
        scanf("\n%d",&arr[i]);
    }

    printf(" the array element is = ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nEnter the number = ");
    scanf("%d",&new);
    
    min_diff = 999;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            sum = arr[i] + arr[j];
            diff = sum - new;
        }
        if(diff < min_diff)
        {
            min_diff =  diff;
            num1 = arr[i];
            num2 = arr[j];
        }
    }
    printf("\n the sum  of %d and %d is colsest to %d  ",num1,num2,new);
    

}