// 8.Write a C program which accept string from user and reverse words from that string which are of even wordLength.
#include<stdio.h>
void main() 
{
    int i, j, k, wordLength;
    char string[100];
    printf("Enter String :\n");
    fgets(string, sizeof(string), stdin);

    i = 0;
    while(string[i] != '\n')
    {
        wordLength = 0;

        while(string[i] == ' ')
        {
            i++;
        }

        k = i;

        while(string[i] != ' ' && string[i] != '\n')
        {
            wordLength++;
            i++;
        }

        if((wordLength % 2) == 0)
        {
            j = i - 1;
            while(j >= 0 && string[j] != ' ')
            {
                printf("%c", string[j]);
                j--;
            }
            if (string[i - 1] != ' ' && string[i] == ' ')
            {
                printf(" ");
            }
        }
        else{
            while(string[k] != ' ' && string[k] != '\n')
            {
                printf("%c", string[k]);
                k++;
            }
            if (string[k - 1] != ' ' && string[k] == ' ')
            {
                printf(" ");
            }
        }
        i++;
    }
}