#include<stdio.h>
void main() 
{
    int i, n, target, flag = 0, max = -2147483648, min = 2147483647;
    int i_arr[100]; // initializing i_arr 
    printf("How Many Elements To Entered Inside Array : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &i_arr[i]); // taking inputs 
    }

    for(i = 0; i < n; i++)
    {
        if(max < i_arr[i])  // max condn
        {
            max = i_arr[i];
        }
        if(min > i_arr[i]) // min condn
        {
            min = i_arr[i];
        }
    }
    printf("Max_Ele is %d \nMin_Ele is %d\n", max, min);
}