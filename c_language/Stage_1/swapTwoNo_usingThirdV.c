#include<stdio.h>
void main()
{
    int num1,num2,temp;

    printf("Enter value of Num1 & num2:");
    scanf("%d%d",&num1,&num2);
    temp = num2;
    num2 = num1;
    num1 = temp;
    
    printf("Value of num1:%d & value of num2:%d\n",num1,num2);
    

}