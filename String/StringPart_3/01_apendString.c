// 1.Write a C program which accept two strings from user and append second string after first string.
#include<stdio.h>
void main() 
{
    int i, j;
    char str1[200], str2[100];

    printf("Enter String1 : \n");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter String2 : \n");
    fgets(str2, sizeof(str2), stdin); 

    i = 0;
    while(str1[i] != '\n') 
    {
        i++;
    }

    j = 0;
    while(str2[j] != '\n')
    {
        str1[i] = str2[j];
        if(str2[j + 1] == '\n')
        {
            str1[i + 1] = '\0';
        }
        i++;
        j++;
    }
    printf("%s", str1);
}