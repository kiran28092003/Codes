//lcm
#include<stdio.h>
void main()
{
    int max,n1,n2;

    printf("Enter the first number:");
    scanf("%d",&n1);

    printf("Enter second number:");
    scanf("%d",&n2);

    if(n1>n2)
        max=n1;
    else
        max=n2;

    while(1)
    {
        if(max%n1==0 && max%n2==0)
        {
            if(max);
            break;
        }
        max++;
    }
    printf("LMC of %d and %d is:%d",n1,n2,max);
}