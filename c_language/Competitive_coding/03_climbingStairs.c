#include<stdio.h>

int no_of_ways(int, int);

void main() 
{
    int n;
    
    printf("Enter No. Of Stairs : \n");
    scanf("%d", &n);

    printf("Total Ways To Climb %d Stairs : %d\n", n, no_of_ways(0, n));
}

int no_of_ways(int cs, int ts) // currentStair(cs), targetStair(ts)
{
    int oneStep, twoStep;

    if(cs == ts)
        return 1;

    if(cs > ts)
        return 0;

    oneStep = no_of_ways((cs + 1), ts);
    twoStep = no_of_ways((cs + 2), ts);

    return oneStep + twoStep;
}