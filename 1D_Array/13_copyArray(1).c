#include<stdio.h>

void main()
{
    /*Write a C program to create an array of n elements using static memory 
    allocation to copy the elements of one array into another array.*/

    int i , n , j , arr[100] , brr[100]; 

    printf("Enter the number of element in array =  ");
    scanf("%d",&n);

    printf("Enter the array element =  ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    } 

    j = 0;
    for(i = 0; i < n; i++)
    {
        brr[j] == arr[i];
        j++;
    }
    printf("given array = ");
    
    for(i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    j = 0;
    printf("\ncopy array element is =  ");
    for(i = 0; j < n; j++)
    {
        printf("%d\t",arr[j]);
    }

}