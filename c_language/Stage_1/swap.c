#include<stdio.h>
void main()
{
    int a=10,b=20,c;
    c=a;
    a=b;
    b=c;

    printf("%d\n",a);
    printf("%d\n",b);
}