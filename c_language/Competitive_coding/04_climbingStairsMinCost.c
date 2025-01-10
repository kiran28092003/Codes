#include<stdio.h>

int minimum(int, int);

int minimum_cost(int[], int, int);

void main() 
{
    int cost[] = {10, 15, 20};

    int n = 3;
    
    printf("Minimum Cost = %d\n", minimum(minimum_cost(cost, 0, n), minimum_cost(cost, 1, n)));
}

int minimum(int a, int b)
{
    if(a > b)
        return b;
    else
        return a;
}

int minimum_cost(int cost[], int cs, int ts) // currentStair(cs), targetStair(ts)
{
    int oneStep, twoStep;

    if(cs == ts)
        return 0;

    if(cs > ts)
        return 1000;

    oneStep = cost[cs] + minimum_cost(cost, cs + 1, ts);
    twoStep = cost[cs] + minimum_cost(cost, cs + 2, ts);

    return minimum(oneStep, twoStep);
}