#include<stdio.h>
void main()
{
    int ans=0,n,rem;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0){
        rem = n % 10;
        ans = ans*10+rem;
        n = n/10;
    }
    printf("Reverce Number is:%d\n",ans);
}