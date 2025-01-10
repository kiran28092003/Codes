#include<stdio.h>

int fibonacci(int);

void main()
{
    int n = 10; // n_th term
    printf("Fibonacci %dth Term = %d", n, fibonacci(n));

}

int fibonacci(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2); 
}