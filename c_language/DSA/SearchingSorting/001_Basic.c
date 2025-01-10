
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input(int*,int);
void show(int*,int,const char*);
void main()
{
    int* a = NULL;
    int N;
    puts("Enter number of elements to sort\n");
    scanf("%d",&N);

    if(N<0)
    {
       puts("Invalid Input Array size\n");
        exit(EXIT_FAILURE);
    }
    a =(int*)malloc(N * sizeof(int));
    if(a == NULL)
    {
        puts("Enter in memory allocation\n");
        exit(EXIT_FAILURE);
    }
    input(a,N);
    show(a,N,"before sort\n");
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


