#include<stdio.h>
void main()
{
    int rem,n;

    printf("Enter the number:\n");
    scanf("%d",&n);
    rem = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    printf("Sum of first and last digit is:%d\n",rem+n);
}