#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input(int*,int);
void show(int*,int,const char*);
void merge_sort(int*,int,int);
void merge_proc(int*,int,int,int);

void main()
{
    time_t start_time;
    time_t end_time;
    time_t delta_time;
    int* a = NULL;
    int N;

    puts("Enter size of array");
    scanf("%d",&N);

    if(N<=0)
    {
        puts("Invalid size of array");
        exit(EXIT_FAILURE);
    }
    a = (int*)malloc(N * sizeof(int));
    if(a == NULL)
    {
        puts("Error in memory allocation");
        exit(EXIT_FAILURE); 
    }
    input(a,N);
    show(a,N,"before sort:\n");
    start_time  = time(0);
    merge_sort(a,0,N-1);
    end_time = time(0);
    show(a,N,"after sort:\n");
    delta_time = end_time - start_time;
    printf("Total elapsed time = %ld",delta_time);

    free(a);
    a = NULL;
    exit(EXIT_SUCCESS);
}
void input(int* a, int N)
{
    int i;
    srand(time(0));
    for(i=0;i<N;i++)
    {
        a[i]=rand();
    }
}
void show(int* a,int N,const char* msg)
{
    int i ;
    if(msg != NULL)
    {
        puts(msg);
    }
    for(i=0;i<N;i++)
    {
      printf("a[%d]:%d\n",i,a[i]);
    }     
}
void merge_sort(int* a,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge_proc(a,low,mid,high);
    }
}
void merge_proc(int* a,int low, int mid,int high)
{
    int* a1 = NULL;
    int* a2 = NULL;

    int N1,N2,i,j,k;

    N1 = mid - low + 1;
    N2 = high - mid;
    a1 = (int*)malloc(N1 * sizeof(int));
    if(a1 == NULL)
    {
        puts("Error in memory allocation");
        exit(EXIT_FAILURE);
    }
    a2 = (int*)malloc(N2 * sizeof(int));
    if(a2 == NULL)
    {
        puts("Error in memory allocation");
        exit(EXIT_FAILURE);
    }
    for(i=0;i<N1;i++)
    {
        a1[i]=a[low+i];

    }
    for(i=0;i<N2;i++)
    {
        a2[i]=a[mid+1+i];
    }
    i = 0;
    j = 0;
    k = 0;

    while(i<N1 && j<N2)
    {
        if(a1[i]<a2[j])
        {
            a[low+k]=a1[i];
            i++;
            k++;
            
        }
        else{
            a[low+k]=a2[j];
            j++;
            k++;
        }
    }
    while(i<N1)
    {
        a[low+k] = a1[i];
        i++;
        k++;
    }

    while(j<N2)
    {
        a[low+k] = a2[j];
        j++;
        k++;
    }

    free(a1);
    a1 = NULL;

    free(a2);
    a2 = NULL;
}