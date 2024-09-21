#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
void show_subarray(int[],int,int,const char*);
void merge_proc(int[],int,int,int);
void main()
{
    int a[] = {
        94,65,87,12,
        10,20,30,40,50,15,25,35,45,55,65,75,
        -10,96,1,33
    };
    int p = 4,q = 8, r = 15;
    show_subarray(a,p,r,"before sort");
    merge_proc(a,p,q,r);
    show_subarray(a,p,r,"after sort");

}
void show_subarray(int a[],int p,int r,const char* msg)
{
    int i;
    if(msg!=NULL)
    {
        puts(msg);
        for(i=p;i<=r;i++)
        {
            printf("a[%d]:%d\n",i,a[i]);
        }
    }

}
void merge_proc(int a[],int p,int q,int r)
{
    int i,j,k;
    int N1 = q-p+1;
    int N2 = r-q;

    int* a1 = NULL;
    int* a2 = NULL;

    a1 = (int*)malloc(N1* sizeof(int));
    if(a1 == NULL)
    {
        puts("Error in memory allocation");
        exit(EXIT_FAILURE);
    }
     a2 = (int*)malloc(N2* sizeof(int));
    if(a2==NULL)
    {
        puts("Error in memory allocation");
        exit(EXIT_FAILURE);
    }
    for(i = 0;i<N1;i++)
    {
        a1[i] = a[p+i];
    }
    for(i = 0;i<N2;i++)
    {
        a2[i] = a[q+1+i];
    }
    i = 0;
    j = 0;
    k = 0;
    while(TRUE) //or code is given optional for this while and below code
    {
        if(a1[i]< a2[j])
        {
            a[p+k] = a1[i];
            i++;
            k++;
            if(i == N1)
            {
                while(j<N2)
                {
                    a[p+k] = a2[j];
                    j++;
                    k++;
                }
                break;
            }
        }
        else{
            a[p+k] = a2[j];
            j++;
            k++;
            if(j == N2)
            {
                while(i<N1)
                {
                    a[p+k] = a1[i];
                    i++;
                    k++;
                }
                break;
            }
        }
    }
}

/*while(i<N1 && j<N2)
    {
        if(a1[i] < a2[j])
        {
            a[p+k] = a1[i];
            i++;
            k++;
        }
        else{
            a[p+k]= a2[j];
            j++;
            k++;
        }
    }
    while(i<N1)
    {
        a[p+k]=a1[i];
        i++;
        k++;
    }
    while(j<N2)
    {
        a[p+k]=a2[j];
        j++;
        k++;
    }*/