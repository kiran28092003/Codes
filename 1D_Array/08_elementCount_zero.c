#include<stdio.h>
void main()
{
    int i, n, gcount = 0, lcount = 0, ecount = 0;
    int i_arr[100];
    printf("How Many Element To Be Entered Inside Array : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &i_arr[i]);
    }

    // Greater Then Zero Code

    for(i = 0; i < n; i++)
    {
        if(i_arr[i] > 0)
        {
            gcount++;
        }
    }
    // Less Then Zero Code

    for(i = 0; i < n; i++)
    {
        if(i_arr[i] < 0)
        {
            lcount++;
        }
    }

    // Equal to Zero Code

    for(i = 0; i < n; i++)
    {
        if(i_arr[i] == 0)
        {
            ecount++;
        }
    }

    printf("Elements Greater Then Zero Are %d\n", gcount);
    printf("Elements Less Then Zero Are %d\n", lcount);
    printf("Elements Equal To Zero Are %d\n", ecount);

}