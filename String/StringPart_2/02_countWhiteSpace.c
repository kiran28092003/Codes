// 2.Write a C program which accept sentence from user and print number of white spaces from that sentence.
#include<stdio.h>
void main() 
{
    int index, count = 0;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    while(sentence[index] != '\0') 
    {
        if(sentence[index] == ' ') 
        {
            count++;
        }
        index++;
    }

    printf("Spaces : %d\n", count);
}