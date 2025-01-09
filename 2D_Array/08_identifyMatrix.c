#include<stdio.h>
int main() 
{
    int i, j, flag = 0;
    int matrix[3][3];
    printf("Enter %d Elements Inside Matrix : \n", 3*3);

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            if(i == j)
            {
                if(matrix[i][j] != 1)
                {
                    printf("Matrix Is Not Identify\n");
                    flag = 1;
                    break; // This Breaks innerMost Loop
                }
            }
            else
            {
                if(matrix[i][j] != 0) // i > j or i < j
                {
                    printf("Matrix Is Not Identify\n");
                    flag = 1;
                    break; //  This Breaks innerMost Loop
                }
            }
        }
        if(flag == 1)
        {
            break; // This Breaks outerMost Loop
        }
    }
    if(flag == 0)
    {
        printf("Matrix Is Identify\n");
    }
}