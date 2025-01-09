#include<stdio.h>
#include<limits.h>
#define max(a, b)  a > b ? a : b

int max_profit(int[], int[], int, int, int);

void main() 
{
    int total_items = 3; 
    int capacity = 4;
    int weight[] = {1, 2, 3};
    int profit[] = {4, 5, 1};

    printf("Maximum Profit Is : %d\n", max_profit(weight, profit, 0, total_items, capacity));
}

int max_profit(int weight[], int profit[], int current_item, int total_items, int capacity)
{
    int if_consider = INT_MIN, if_not_consider;

    if(current_item == total_items)
        return 0;

    if(weight[current_item] <= capacity)
    {
        if_consider = profit[current_item] + max_profit(weight, profit, (current_item + 1), total_items, (capacity - weight[current_item]));
    }

    if_not_consider = max_profit(weight, profit, (current_item + 1), total_items, capacity);

    return max(if_consider, if_not_consider);
}