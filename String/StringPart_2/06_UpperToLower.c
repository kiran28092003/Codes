// 6.Write a C program to convert the string from upper case to lower case.
#include<stdio.h>
void main() 
{
    int index = 0;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    while(sentence[index] != '\0')
    {
        while(sentence[index] == ' ')
        {
            index++;
        }

        while(sentence[index] != ' ' && sentence[index] != '\0' && sentence[index] != '\n')
        {
            printf("%c", (sentence[index] + 32));
            index++;
        }

        if (sentence[index] == ' ')
        {
            printf(" ");
        }
        
        index++;
    }
}