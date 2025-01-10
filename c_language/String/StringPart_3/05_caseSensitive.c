// 5.Write a C program which accept two strings from user and compare two strings without case sensitivity. If both strings are equal then return 0 otherwise return difference between first mismatch character.
#include<stdio.h>
void main() 
{
    int i, flag = 0, str1Length = 0, str2Length = 0;
    char str1[100], str2[100];

    printf("Enter String1 : \n");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter String2 : \n");
    fgets(str2, sizeof(str2), stdin);

    i = 0;
    while(str1[i] != '\n') 
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            str1[i] -= 32;
        }
        str1Length++;
        i++;
    }

    i = 0;
    while(str2[i] != '\n') 
    {
        if(str2[i] >= 'a' && str2[i] <= 'z')
        {
            str2[i] -= 32;
        }
        str2Length++;
        i++;
    }
    
    if(str1Length != str2Length)
    {
        printf("Strings Are Not Equal\n");
    }
    else
    {
        i = 0;
        while(str1[i] != '\n' && str2[i] != '\n')
        {
            if(str1[i] != str2[i])
            {
                printf("Not Equal...\nFirst Mismatch Chars Difference %d \n", str1[i] - str2[i]);
                flag = 1;
                break;
            }
            i++;
        }
        if(flag == 0)
        {
            printf("Strings Are Equal\n");
        }
    }
}

// Lexicographically