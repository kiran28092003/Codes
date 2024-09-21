#include<stdio.h>
void main() 
{
    int i, n;
    int i_arr[100]; // initializing i_arr 
    printf("How Many Elements To Entered Inside Array : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &i_arr[i]); // taking inputs 
    }


    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", i, i_arr[i]); // displaying inputs in rev order
    }

}