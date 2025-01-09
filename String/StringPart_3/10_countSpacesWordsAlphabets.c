// 10.Write a C program to count number of alphabets, spaces and words in given string.
#include<stdio.h>
void main() 
{
    int i, alphabetCount = 0, spaceCount = 0, wordCount = 0;
    char string[100];
    printf("Enter String : \n");
    fgets(string, sizeof(string), stdin);

    i = 0;
    while(string[i] != '\n')
    {
        if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z') )
        {
            alphabetCount++;
        }
        i++;
    }

    i = 0;
    while(string[i] != '\n')
    {
        if(string[i] == ' ')
        {
            spaceCount++;
        }
        i++;
    }

    i = 0;
    while(string[i] != '\n')
    {
        if((string[i] != ' ' && string[i + 1] == ' ') || string[i + 1] == '\n')
        {
            wordCount++;
        }
        i++;
    }
    printf("Words : %d\n", wordCount);
    printf("Space : %d\n", spaceCount);
    printf("Alphabets : %d\n", alphabetCount);

}