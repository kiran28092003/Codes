#include<stdio.h>

int count_combinations(int[], int, int , int, int);

int main(void)
{
    int array[] = {1, 1, 1, 1, 1};
    int target_sum = 3;
    int array_length = 5;
    int total_combinations;

    total_combinations = count_combinations(array, target_sum, target_sum, array_length, 0);

    printf("Number of possible combinations : %d\n", total_combinations);

    return 0;
}


int count_combinations(int array[], int target_sum, int current_sum, int array_length, int current_index)
{
    int plus, minus;

    if(current_sum == 0)
        return 1;
    if(current_sum > target_sum)
        return 0;
    if(current_index >= array_length)
        return 0;

    plus = count_combinations(array, target_sum, current_sum - array[current_index], array_length, current_index + 1);
    minus = count_combinations(array, target_sum, current_sum + array[current_index], array_length, current_index + 1);

    return (plus + minus);
}