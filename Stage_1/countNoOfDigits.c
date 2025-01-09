#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the Number");
    scanf("%d",&num);
    
    if(num == 0)
    {
        count = 1;
    }
    else{
        //count the digits
        while(num != 0)
        {
            num=num/10;
            count++;
        }
    }
    printf("Number of digits:%d\n",count);
}