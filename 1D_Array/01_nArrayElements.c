#include<stdio.h>
void main() 
{
    int i, n;
    int i_arr[100];
    printf("How Many Elements To Entered Inside Array : ");
    scanf("%d", &n);

    // Taking Input Into Array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &i_arr[i]);
    }

    // Display Elements Of Array
    for(i = 0; i < n; i++)
    {
        printf("i_arr[%d] = %d\n", i, i_arr[i]);
    }

}