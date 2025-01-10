// 3.Write a C program to print count number of characters in given string
#include<stdio.h>
void main()
{
    int index, countChar = 0;
    char stringArr[100];
    printf("Enter String : \n");
    fgets(stringArr, sizeof(stringArr), stdin);

    index = 0;
    while(stringArr[index] != '\n') // ***...str\n\0
    {
        // Acii code for space is 32
        while(stringArr[index] == ' ')
        {
            index++;
        }
        // condn for characters
        if(stringArr[index] != ' ' )
        {  
            countChar++;
        }
        if(stringArr[index + 1] == '\n')
        {
            break;
        }
        index++;
    }
    printf("Character Count = %d\n", countChar);
}