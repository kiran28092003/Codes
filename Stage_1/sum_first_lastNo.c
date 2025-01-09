#include<stdio.h>
int main()
{
    int firstdigit,lastdigit,num,sum;
    printf("Enter the number");
    scanf("%d",&num);

    //finding the last digit
    lastdigit = num % 10;

    //finding the firstdigit
    firstdigit = num;
    while(firstdigit >= 10)
    {
        firstdigit = firstdigit / 10;
    }

    printf("Value of First Digit is:%d\n",firstdigit);
    printf("Value of Last Digit is:%d\n",lastdigit);
    sum = firstdigit + lastdigit;
    printf("Sum of first ans last digit is:%d",sum);
}