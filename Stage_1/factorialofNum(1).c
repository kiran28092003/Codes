#include<stdio.h>
void main()
{
     int num,i=1,factorial=1;
     printf("Enter the number:");
     scanf("%d",&num);

     if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else {
        while(i<=num) {
            factorial=factorial*i;
            i++;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }   
    
}