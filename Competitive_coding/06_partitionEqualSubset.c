#include <stdio.h>

int is_partition_possible(int[], int);
int check_partition_possibility(int[], int, int, int);

int main(void)
{
    int result;
    int array[] = {1, 5, 11, 5};
    int array_length = 4;

    result = is_partition_possible(array, array_length);

    if(result == 0)
    {
        puts("Partition not possible");
    }
    else
    {
        puts("Partition possible");
    }

    return 0;
}

int is_partition_possible(int array[], int array_length)
{
    int i;
    int total_sum = 0;

    for(i = 0 ; i < array_length ; i++)
    {
        total_sum += array[i];
    }

    if(total_sum % 2 != 0)
        return 0;

    return check_partition_possibility(array, 0, total_sum / 2, array_length);
}

int check_partition_possibility(int array[], int current_index, int target_sum, int array_length)
{
    int considered, not_considered;

    if(target_sum == 0)
        return 1;
    if(target_sum < 0)
        return 0;
    if(current_index >= array_length)
        return 0;

    considered = check_partition_possibility(array, current_index + 1, target_sum - array[current_index], array_length);
    not_considered = check_partition_possibility(array, current_index + 1, target_sum, array_length);

    return (considered || not_considered);
}