#include<stdio.h>
int main() 
{
    int i, j, matrixSum = 0;
    int matrix[3][3];
    
    printf("Enter %d Elements : \n", 3*3);


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
            matrixSum += matrix[i][j];
        }
    }

    printf("The Sum Of All Matrix Elements Is : %d\n", matrixSum);
    return 0;
}