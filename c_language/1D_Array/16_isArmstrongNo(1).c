#include<stdio.h>
void main()
{
    /*Write a C program to create an array of n elements using static memory 
    allocation to print all Armstrong numbers from given array.*/

    int i , j , n , temp , rem , flag , count , sum , prod , arr[100];

    printf("Enter how many number in array = ");
    scanf("%d",&n);

    printf("Enter the array element = ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    flag = 0;
    for(i = 0; i < n; i++)
    {
        count = 0;
        temp = arr[i];
        while(temp > 0)
        {
            temp = temp / 10;
            count ++;
        }
        prod = 1;
        sum = 0;
        temp = arr[i];
        while (temp > 0)
        {
           rem = temp  % 10;
           for(j = 0; j < count; j++)
           {
              prod = rem * prod; 
           }
           sum = sum + prod;
           temp = temp / 10;
        }
        
        if(sum == arr[i])
        {
            flag = 1;
            printf("\nArmstrong number is = %d",arr[i]);
        }
        
    }
    if(flag == 0)
    {
        printf("There is no armstrong number in array");
    }
}