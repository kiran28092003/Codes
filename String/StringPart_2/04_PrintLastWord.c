// 4.Write a C program which accept sentence from user and print last word from that sentence
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
        index++;
    }
    
    while(sentence[index] != ' ')
    {
        index--;
    }

    index++;
    while(sentence[index] != '\0')
    {
        printf("%c", sentence[index]);
        index++;
    }
}