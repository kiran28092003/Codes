
// 2.Write a C program to accept string with multiple spaces from user and print it with a single space as a delimiter
// Eg:
// Input String:
//  ____India______is___my___country____
// Output String:
// India_is_my_country (Consider _ as space)

#include<stdio.h>
void main()
{
    int index;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    index = 0;
    while(sentence[index] != '\n')
    {
        while(sentence[index] == ' ')
        {
            index++;
        }
        while(sentence[index] != ' ' && sentence[index] != '\n')
        {
            printf("%c", sentence[index]);
            if(sentence[index + 1] == ' ')
            {
                printf("%c", ' ');
            }
            index++;
        }
        if(sentence[index] == '\n')
        {
            break;
        }
        index++;
    }
}
