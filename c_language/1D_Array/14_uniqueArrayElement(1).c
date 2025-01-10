#include<stdio.h>

void main()
{
    /*Write a C program to create an array of n elements using static memory 
    allocation to print all unique elements in an array.*/

    int i , j , n , count , arr[100]; 

    printf("Enter how many element in array = ");
    scanf("%d",&n);

    printf("Enter the array element = ");
    for( i = 0; i < n; i++)
    {
        scanf("%d\n",&arr[i]);
    }
    printf("Unique element is = ");

    for ( i = 0; i < n; i++)
    {
        count = 0;
        for ( j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                if(count > 1)
                {
                    break;
                }
            }
            
        }
        if(count == 1)
        {
            printf("%d\t",arr[i]);
        }
        
    }
    
}