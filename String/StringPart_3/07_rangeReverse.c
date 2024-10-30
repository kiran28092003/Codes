// 7.Write a C program which accept string from user and then accept range and reverse the string in that range without taking another string
#include<stdio.h>
void main() 
{
    int i, j, k, startingRange, endingRange;
    char string[100];
    printf("Enter String : \n");
    fgets(string, sizeof(string), stdin);

    printf("Enter Start Index : \n");
    scanf("%d", &startingRange);

    printf("Enter End Index : \n");
    scanf("%d", &endingRange);


    while (i < startingRange)
    {
        printf("%c", string[i]);
        i++;
    }

    j = endingRange - 1;
    k = i;
    while (j >= i)
    {
        printf("%c", string[j]);
        k++;
        j--;
    }

    while (string[k] != '\n')
    {
        printf("%c", string[k]);
        k++;
    }
}