#include<stdio.h>

void main()
{
    /*Write a C program to create an array of n elements using static
       memory allocation to accept position from user and delete an element 
       at given position from an array*/

    int n , i ,arr[100] , del;

    printf("Enter the number of element in array = ");
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

    printf("\nEnter the position of element whitch you want to delete = ");
    scanf("%d",&del);

    for(i = del; i < n; i++)
    {
        arr[del] = arr[del + 1];   
        del++;
    }

    printf(" the array element is = ");
    for (i = 0; i < n-1; i++)
    {
        printf("%d\t",arr[i]);
    }
}