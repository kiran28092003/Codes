#include<stdio.h>
void main()
{
    int sum=0,i=1,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
           sum=sum+i; 
        }
        i++;
    }
    printf("Sum of Even numbers is:%d\n",sum);
}