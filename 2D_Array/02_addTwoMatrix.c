#include<stdio.h>
int main() 
{
    int i, j;
    int firstMatrix[3][3], secondMatrix[3][3], thirdMatrix[3][3];

    printf("Enter %d Elements In 1st Matrix: \n", 3*3);
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter %d Elements In 2nd Matrix: \n", 3*3);

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            thirdMatrix[i][j] =  firstMatrix[i][j] + secondMatrix[i][j];
        }
    }

    printf("1st + 2nd Matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", thirdMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}