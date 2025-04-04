
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input(int*,int);
void show(int*,int,const char*);
void insertion_sort(int*,int);
void main()
{
    time_t start_time;
    time_t end_time;
    time_t delta_time;
    int* a = NULL;
    int N;
    puts("Enter number of elements to sort\n");
    scanf("%d",&N);

    if(N<0)
    {
       puts("Invalid Input Array size\n");
        exit(EXIT_FAILURE);
    }
    a =(int*)malloc(N* sizeof(int));
    if(a == NULL)
    {
        puts("Enter in memory allocation\n");
        exit(EXIT_FAILURE);
    }
    input(a,N);
    show(a,N,"\nbefore sort");
    start_time=time(0);
    insertion_sort(a,N);
    end_time=time(0);
    show(a,N,"\nAfter sort");
    delta_time=end_time-start_time;
    printf("Total elapsed time=%ld",delta_time);
    free(a);
    a=NULL;
}


void input(int* a,int N)
{
    int i;
    srand(time(0));
    for(i=0;i<N;i++)
    {
        a[i] = rand();
    }
}
void show(int* a,int N,const char* msg)
{
    int i;
    if(msg != NULL)
    {
        puts(msg);
        for(i=0;i<N;i++)
        {
            printf("a[%d]:%d\n",i,a[i]);
        }
    }
}
void insertion_sort(int* a,int N)
{
    int i;
    int key;
    int empty;
    for(i=1;i<N;i++)
    {
        key = a[i];
        empty = i;
        while(empty>0 && a[empty-1]>key)
        {
            a[empty] = a[empty-1];
            empty--;
            a[empty]=key;
        }
    }
}


