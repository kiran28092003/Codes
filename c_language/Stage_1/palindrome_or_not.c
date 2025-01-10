#include<stdio.h>
void main()
{
    int ans=0,rem,num,n;
    printf("enter the num:\n");
    scanf("%d",&num);

    printf("number is:%d\n",num);
    n=num;
    while(n>0)
    {
        rem = n % 10;
        ans = ans*10 + rem;
        n = n / 10;
    }
    printf("reverce is:%d\n",ans);
    if(num == ans)
    {
        printf("number is palindrome number");
    }
    else{
        printf("number is not palindrome number");
    }
}