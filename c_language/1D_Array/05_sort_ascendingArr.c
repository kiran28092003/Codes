#include<stdio.h>
void main() 
{
    int i, j, n, temp;
    int i_arr[100]; // initializing i_arr 
    printf("How Many Elements To Entered Inside Array : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &i_arr[i]); // taking inputs 
    }

    printf("Before Sorting\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", i_arr[i]);
    }

    // Sorting (Selection Sort)
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(i_arr[i] > i_arr[j])
            {
                temp = i_arr[i];
                i_arr[i] = i_arr[j];   // Swapping (using 3rd var)
                i_arr[j] = temp;
            }
        }
    }

    
    printf("\nAfter Sorting\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", i_arr[i]);
    }
}