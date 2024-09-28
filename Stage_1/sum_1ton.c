#include<stdio.h>
void main()
{
    int ans=0,n,i=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(1<=n)
    {
        ans=ans+i;
         i++;
    }
    printf("sum of  1ton natural no.is:%d\n",ans);
}