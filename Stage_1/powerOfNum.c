#include<stdio.h>
void main()
{
    int i,base,exponent,ans=1;
    printf("Enter value of base:");
    scanf("%d",&base);

    printf("Enter value of exponent:");
    scanf("%d",&exponent);

    for(i=1;i<=exponent;i++)
    {
        ans = ans * base;
    }
    printf("%d^%d is %d\n",base,exponent,ans);
}