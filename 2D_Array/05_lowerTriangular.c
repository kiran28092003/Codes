#include<stdio.h>
int main() 
{
    int i, j, flag = 0;
    int matrix[3][3];
    
    printf("Enter %d Elements : \n", 3*3);


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
            if (i < j)
            {
                if (matrix[i][j] != 0)
                {
                    printf("Not An Lower Triangular Matrix\n");
                    flag = 1;
                    break; // This breaks innermost loop
                }
            }
            else
            {
                if(matrix[i][j] == 0) // i >= j
                {
                    printf("Not An Lower Triangular Matrix\n");
                }
            }
        }
        if (flag == 1)
        {
            break; // This breaks outermost loop
        }
    }

    if (flag == 0)
    {
        printf("Matrix is Lower Triangular\n");
    }

    return 0;
}