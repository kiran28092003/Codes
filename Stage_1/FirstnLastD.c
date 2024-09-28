#include<stdio.h>
int main()
{
    int firstdigit,lastdigit,num;
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
}