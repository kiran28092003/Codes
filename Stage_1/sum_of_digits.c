#include<stdio.h>
void main()
{
    int sum=0,num,rem;
    printf("Enter the number");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    printf("Sum is:%d",sum);
    
}