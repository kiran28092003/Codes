#include<stdio.h>
void main()
{
    int num,i=1;
    printf("Enter the num:");
    scanf("%d",&num);

    printf("All possible Factors of %d are:\n",num);
    while(i<=num)
    {
        if(num % i == 0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}