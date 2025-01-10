// 9.Write a C program which accept string from user and check whether string is palindrome or not.
#include<stdio.h>
void main() 
{
    int i, j, flag = 0;
    char string[100], revString[100];

    printf("Enter A Word To Check Whether It's Palindrome : \n");
    fgets(string, sizeof(string), stdin);
    
    i = 0;
    while(string[i] != '\n')
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
        }
        i++;
    }


    i = 0;
    while(string[i + 1] != '\n')
    {
        i++;
    }


    j = 0;
    while(i >= 0)
    {
        revString[j] = string[i];
        if((i - 1) == 0)
        {
            revString[j + 1] = '\0';
        }
        j++;
        i--;
    }

    while(string[i] != '\n' && revString[i] != '\n')
    {
        if(string[i] != revString[i])
        {
            printf("Not Palindrome\n");
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
    {
        printf("Palindrome\n");
    }
    
}