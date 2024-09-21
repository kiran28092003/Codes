#include<stdio.h>
int main() 
{
    int i, j, k, sum;
    int firstMatrix[3][3], secondMatrix[3][3], thirdMatrix[3][3];

    printf("Enter %d Elements Inside 1st Matrix : \n", 3*3);
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter %d Elements Inside 2nd Matrix : \n", 3*3);
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }


    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            sum = 0;
            for(k = 0 ; k < 3 ; k++)
            {
                sum += firstMatrix[i][k] * secondMatrix[k][j]; 
            }
            thirdMatrix[i][j] = sum;
        }
        printf("\n");
    }

    printf("Multiplication Of First And Second Matrices Is ...\n");
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d  ", thirdMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}  