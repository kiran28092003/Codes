#include<stdio.h>

void main()
{
    /*Write a C program to create an array of n elements using static memory 
    allocation from user and print only those elements which are divisible by 
    7 and not divisible by 5.*/

    int n , i , j ,arr[100];

    printf("Enter the number of element in array = ");
    scanf("%d",&n);

    printf("Enter the array element = ");
    for (i = 0; i < n; i++)
    {
        scanf("\n%d",&arr[i]);
    }

    printf("The array elements are =>");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    printf("\nArray elements which are divisible by 5 and 7 =>");
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 5 == 0 && arr[i] % 7 == 0)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\nArray elements which are divisible by 7 but not by 5=>");
    for(j=0;j<n;j++)
    {
        if(arr[j] % 5 != 0 && arr[j] % 7 == 0)
        {
            printf("%d\t",arr[j]);
        }
    }
}