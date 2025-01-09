#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input(int*,int);
void show(int*,int,const char*);
void quick_sort(int*,int,int);
int partition(int*,int,int);
void main()
{
    time_t start_time;
    time_t end_time;
    time_t delta_time;
    int N;
    int* a=NULL;
    puts("enter size of array");
    scanf("%d",&N);

         if(N<=0)  
    {
        puts("invalid size of array");
        exit(EXIT_FAILURE);
    }

    a=(int*)malloc(N * sizeof(int));

    if(a==NULL)
    {   
        puts("error in memory allocation");
        exit(EXIT_FAILURE);
    }

       input(a,N);
       show(a,N,"before sort:");
       start_time = time(0);
       quick_sort(a,0,N-1);
       end_time = time(0);
       show(a,N,"after sort:");
       delta_time = end_time - start_time;
       printf("total elapsed time=%ld",delta_time);


       free(a);
       a = NULL;
       exit(EXIT_SUCCESS);
}

void input(int* a,int N)
{
        int i;
        srand(time(0));

        for(i=0; i < N;i++)
         {
            a[i] = rand();
         }
}

void show(int* a,int N,const char* msg)
{
    int i;

    if(msg!=NULL)
     puts(msg);

    for(i=0 ; i<N ; i++)
     printf("a[%d]: %d\n",i,a[i]);

}

void quick_sort(int* a,int p,int r)
{
    int q;
    if(p < r)
        {
           q =  partition(a,p,r);
           quick_sort(a,p,q-1);
           quick_sort(a,q+1,r);
        }
}

int partition(int* a,int p,int r)
{
    int i = p - 1;
    int pivot= a[r];
    int temp;
    int j;

    for(j = p ; j < r ; j++)
    {
        if( a[j] < pivot)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i+1];
    a[i+1] = a[r];
    a[r] = temp;

    return (i+1);
}