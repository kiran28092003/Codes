#include<stdio.h>
int main() 
{
    int i, j, flag = 0;
    int matrix[3][3];

    printf("Enter %d Element Inside Matrix : \n", 3*3);

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            if(i > j) // skips diagonal and above diagonal elements
            {
                if(matrix[i][j] != matrix[j][i]) // checks whether mirror images are not equal
                {
                    printf("Matrix is Not Symmetric\n");
                    flag = 1;
                    break; // This breaks innermost loop
                }
            }
        }
        if(flag == 1)
        {
            break; // This breaks outermost loop
        }
    }

    if(flag == 0)
    {
        printf("Matrix is Symmetric\n");
    }
    return 0;
}