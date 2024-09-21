#include<stdio.h>

void main()
{
    /*Write a C program to create an array of n elements using static 
       memory allocation to Find Union & Intersection of 2 arrays.*/

    int n1 , n2  , i , j , arr[100] , brr[100] , uni[100] , inter;
    

    printf("\nEnter the number of  element in 1st array = ");
    scanf("%d",&n1);

    printf("\nEnter the 1st array element = ");
    for (i = 0; i < n1; i++)
    {
        scanf("\n%d",&arr[i]);
    }

    printf("\nEnter the number of  element in 2nd array = ");
    scanf("%d",&n2);

    printf("\nEnter the 2nd array element = ");
    for (i = 0; i < n2; i++)
    {
        scanf("\n%d",&brr[i]);
    }

    printf("\n the 1st array element is = ");
    for (i = 0; i < n1; i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n the 2nd array element is = ");
    for (i = 0; i < n2; i++)
    {
        printf("%d\t",brr[i]);
    }

    printf("\n the 1st Array UNION 2nd Array  element is = ");
    for (i = 0; i < n1; i++)
    {
        printf("%d\t",arr[i]);
    }

    for(i = 0; i < n1; i++)
    {
        for(j = 0; i < n2; j++)
        {
            if(arr[i] != brr[j])
            {
                printf("%d\t",arr[j]);
            }
        }
    }

    printf("\n the 1st Array INTERSECTION 2nd Array  element is = ");

    for(i = 0; i < n1; i++)
    {
        for(j = 0; i < n2; j++)
        {
            if(arr[i] == brr[j])
            {
                uni[j] = arr[j];
            }
        }
    }
}