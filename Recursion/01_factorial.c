#include<stdio.h>

int factorial(int);

void main(void)
{
    int n = 5;
    printf("Factorial Of %d is %d\n", n, factorial(n));
} 

int factorial(int n)
{
    if(n == 1)
        return 1;

    return n * factorial(n - 1);
}