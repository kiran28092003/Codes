// 1.Write a C program which accept sentence from user and print number of small letters, capital letters, Spaces and digits from that sentence.
#include<stdio.h>
void main()
{
    int index, countSpace = 0, countSmall = 0, countCapital = 0, countDigit = 0;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    index = 0;
    while(sentence[index] != '\0')
    {   
        if(sentence[index] == ' ')
        {   
            countSpace++;
        }
        else if(sentence[index] >= 'a' && sentence[index] <= 'z') 
        {
            countSmall++;
        }
        else if(sentence[index] >= 'A' && sentence[index] <= 'Y') 
        {
            countCapital++;
        }
        else if(sentence[index] >= '0' && sentence[index] <= '9') 
        {
            countDigit++;
        }
        index++;
    }
    printf("Small : %d Capital : %d Digit : %d Spaces : %d\n", countSmall, countCapital, countDigit, countSpace);
}