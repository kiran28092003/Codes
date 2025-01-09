#include<stdio.h>
void main()
{
    int num,prod=1,rem;
    printf("Enter the number");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num % 10;
        prod = prod * rem;
        num = num/10;
    }
    printf("Product of all digits is:%d",prod);
}