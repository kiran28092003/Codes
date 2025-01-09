// 11.Write a C program which accepts a string from user which contains a character from ‘b’ to ‘y’
#include<stdio.h>
void main() 
{
    int index;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    index = 0;
    while(sentence[index] != '\0')    
    {
        while(sentence[index] == ' ')
        {
            index++;
        }

        // printing chars only betw 'b' to 'y'
        while(sentence[index] != ' ' && sentence[index] != '\0')
        {
            if(sentence[index] >= 'b' && sentence[index] <= 'y')
            {
                printf("%c", sentence[index]);
            }
            index++;
        }

        if(sentence[index] != '\0')
        {
            printf(" ");
        }

        index++;
    }
}