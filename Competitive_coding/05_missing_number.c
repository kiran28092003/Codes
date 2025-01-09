#include<stdio.h>

int find_missing_number(int[], int, int, int);

int main(void)
{
    int missing_number;
    int n = 20;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20}; // 13 is missing

    missing_number = n * (n + 1) / 2;  // this is the formula to calculate sum of 'n' natural numbers
    
    printf("Missing Number : %d\n", find_missing_number(arr, missing_number, 0, n));

    return 0;
}

int find_missing_number(int arr[], int missing_number, int idx, int n)
{
    if(idx == (n - 2))
        return missing_number - arr[idx];

    return find_missing_number(arr, (missing_number - arr[idx]), (idx + 1), n);
}