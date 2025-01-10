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
            if(matrix[i][j] != 1)
            {
                printf("Matix Is Not Unit");
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            break; // This is Breaks outerMost Loop
        }
    }
    
    if(flag == 0)
    {
        printf("Matrix Is Unit\n");
    }
}