#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input(int* , int);
void show(int* , int , const char*);
void bubble_sort(int* , int);
void swap(int* , int*);

void main()
{
    time_t start_time;
    time_t end_time;
    time_t delta_time;
    int* a = NULL;
    int N;

    puts("Enter number of elements to sort\n");
    scanf("%d", &N);

    if(N < 0)
    {
        puts("Invalid input number !!\n");
        exit(EXIT_FAILURE);
    }
    a = (int*)malloc(N * sizeof(int));

    if(a == NULL)
    {
        puts("Error in memory allocation ! \n");
        exit(EXIT_FAILURE);
    }

    input(a , N);
    show(a , N , "Before Sort \n");
    start_time= time(0);
    bubble_sort(a , N);
    end_time= time(0);
    show(a , N , "After sort \n ");
    delta_time = end_time - start_time ;
    printf("Total elapsed time = %ld",delta_time);

    free(a);
    a = NULL;
}

void input(int* a , int N)
{
    int i ; 
    srand(time(0));

    for(i = 0 ; i < N ; i++)
    {
        a[i] = rand();
    }
}

void show(int* a ,int N , const char* msg)
{
    int i;
    if(msg != NULL)
        puts(msg);

    for(i = 0 ; i < N ; i++)
    {
        printf("a[%d] : %d\n", i , a[i]);
    }
}

void bubble_sort(int* a , int N)
{
    int i , itr ;

    for(itr = 1 ; itr < N ; itr++)
    {
        for(i = 0 ; i < N - itr ; i++)
        {
	    
  	    if(a[i] > a[i+1])
	    {
	        
	        swap(&a[i] , &a[i+1]);
	        
	    }
        }
	
    }
}
void swap(int* num1 , int* num2)
{
    int temp,flag=0 ;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    flag = 1 ;

    if(flag == 0)
    {
        printf("Already sorted!!");
    }
}