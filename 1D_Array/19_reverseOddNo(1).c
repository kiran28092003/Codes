#include<stdio.h>

void main()
{
    /*Write a C program to create an array of n elements using static memory 
     allocation from user and replace all odd numbers by their reverse number.*/

    int n , i ,arr[100] , temp , rem , rev;

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

    printf("\nThe array element after reversing odd element = ");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            rev = 0;
            temp = arr[i];
            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;

            }
            arr[i] = rev;

        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }

}