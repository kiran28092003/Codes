#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum boolean{FLASE = 0, TRUE = 1};

void input(int*, int);
void display(int*, int, const char*);
void bubble_sort(int*, int);
void swap(int*, int*);
int binary_search(int*, int, int, int);

void main() 
{
    int* arr = NULL; // array(arr)
    int N, num_search, idx; // array_size(N) , index(idx)

    puts("Enter Array Size : ");    
    scanf("%d", &N);

    if(N < 0)
    {
        puts("Invalid Array Size...");
        exit(EXIT_FAILURE);
    }

    arr = (int*)malloc(N * sizeof(int));

    if(arr == NULL)
    {
        puts("Memory Allocation Error...");
        exit(EXIT_FAILURE);
    }

    input(arr, N);

    bubble_sort(arr, N);

    display(arr, N, "Array Elements After Sorting Are...");

    
    puts("Enter Number To Be Searched : ");
    scanf("%d", &num_search);

    idx = binary_search(arr, num_search, 0, (N-1));

    if(idx == -1)
    {
        puts("Number Doesn't Exist Inside Array");
    }
    else
    {
        printf("Number Found At Index %d\n", idx);
    }
    
    free(arr);
    arr = NULL;
    exit(EXIT_SUCCESS);
}

void input(int* arr, int N)
{
    int i;
    srand(time(0));

    for(i = 0 ; i < N ; i++)
    {
        arr[i] = rand();
    }
}

void display(int* arr, int N, const char* msg) // message(msg)
{
    int i;

    if(msg != NULL)
    {
        puts(msg); 
    }

    for(i = 0 ; i < N ; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");
}

void bubble_sort(int* arr, int N)
{
    int itr, i; // number_of_iteration(itr)
    enum boolean flag;

    for(itr = 1 ; itr < N ; itr++)
    {
        flag = FLASE;
        for(i = 0 ; i < (N-itr) ; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(&arr[i], &arr[i+1]);
                flag = TRUE;
            }
        }
        if(!flag)
        {
            break; // if sorted
        }
    }
}

void swap(int* num1, int* num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int binary_search(int* arr, int num_search, int low, int high) // lower_bound(low), higher_bound(high)
{
    int mid; // middle(mid)

    if(low <= high)
    {
        mid = (low + high) / 2;
        if(num_search == arr[mid])
        {
            return mid;
        }
        if(num_search < arr[mid])
        {
            return binary_search(arr, num_search, low, (mid-1));
        }
        if(num_search > arr[mid])
        {
            return binary_search(arr, num_search, (mid+1), high);
        }
    }
    return -1;
}