
#include<stdio.h>

int xPowY(int, int);

void main(void) 
{
    int x = 2, y = 2;
    printf("%d xPowY %d = %d\n", x, y, xPowY(x, y));
}

int xPowY(int x, int y)
{
    if(y == 1)
        return x;
    
    return x * xPowY(x, (y-1));
}
