// 3.Write a C program which accept sentence from user and print number of words of even and odd length from that sentence.
#include<stdio.h>
void main() 
{
    int i, countEven = 0, countOdd = 0, wordLength;
    char string[100];
    printf("Enter String : \n");
    fgets(string, sizeof(string), stdin);

    i = 0;
    while(string[i] != '\0')
    {
        wordLength = 0;
        while(string[i] == ' ') 
        {
            i++;
        }

        while(string[i] != ' ' && string[i] != '\n')
        {
            wordLength++;
            i++;
        }

        if((wordLength % 2) == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
        
        i++;
    }
    printf("Even : %d Odd : %d", countEven, countOdd);
}