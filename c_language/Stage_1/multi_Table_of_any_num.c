#include<stdio.h>
void main()
{
    int ans=0,num,i=1;
    printf("Enter the value od num");
    scanf("%d",&num);
    
    while(i<=10)
    {
        ans=ans+num;
        printf("%d*%d = %d\n",num,i,ans);
        i++;
    }
    

}