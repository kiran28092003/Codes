// 4.Write a C program which accept two strings from user and compare only first N characters of two strings. If both strings are equal till first N characters then return 0 otherwise return difference between first mismatch character.
#include <stdio.h>
void main()
{
    int i, flag = 0, compareNum;
    char str1[100], str2[100];

    printf("Enter String1 : \n");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter String2 : \n");
    fgets(str2, sizeof(str2), stdin);

    printf("How Many Chars Do You Want To Compare : \n");
    scanf("%d", &compareNum);
    i = 0;
    while (i < compareNum)
    {
        if (str1[i] != str2[i])
        {
            printf("Not Equal...\nFirst Mismatch Chars Difference %d \n", str1[i] - str2[i]);
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
    {
        printf("Strings Are Equal\n");
    }
}