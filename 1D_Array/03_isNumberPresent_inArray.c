#include<stdio.h>
void main() 
{
    int i, n, target, flag = 0;
    int i_arr[100]; // initializing i_arr 
    printf("How Many Elements To Entered Inside Array : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &i_arr[i]); // taking inputs 
    }

    printf("Enter Number To Be Searched : ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(target == i_arr[i]) // looking for target inside array
        {
            printf("%d is present inside array %d\n", target);
            flag = 1;
        }
    }
    if(flag == 0) 
    {
        printf("%d is not present inside array\n", target);
    }

}