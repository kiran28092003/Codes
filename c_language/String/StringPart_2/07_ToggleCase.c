// 7.Write a C program which toggles the case of a string.
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

        while(sentence[index] != ' ' && sentence[index] != '\n' && sentence[index] != '\0')
        {
            if(sentence[index] >= 'a' && sentence[index] <= 'z') 
            {
                printf("%c", (sentence[index] - 32));
            }
            else{
                printf("%c", (sentence[index] + 32));
            }
            index++;
        }
        if(sentence[index] == ' ')
        {
            printf(" ");
        }
        index++;
    }
}