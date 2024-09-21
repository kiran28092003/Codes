#include<stdio.h>
#define max(a, b)  a > b ? a : b

int max_money(int[], int, int);

void main(void)
{
    int nums[] = {1, 2, 3, 1};
    int n = 4; // n (total_numbers_of_houses)
    printf("The Maximum if_robbery Is : %d\n", max_money(nums, 0, n)); // max_money(maximum_money)
}

int max_money(int nums[], int ch, int n) // ch(current_house)
{
    int if_rob, if_not_rob;

    if(ch >= n)
        return 0;

    if_rob = nums[ch] + max_money(nums, (ch+2), n);
    if_not_rob = max_money(nums, (ch+1), n);

    return max(if_rob, if_not_rob);
}