
// 5.Write a C program to count number of vowels and number of consonants in the given string.#include<stdio.h>
#include<stdio.h>
void main()
{
    int index, vowelCount = 0, consonantCount = 0;
    char sentence[100];
    printf("Enter String :\n");
    fgets(sentence, sizeof(sentence), stdin);

    index = 0;
    while(sentence[index] != '\n')
    {
        while(sentence[index] == ' ')
        {
            index++;
        }
        if(sentence[index] == 'a' || sentence[index] == 'A' || sentence[index] == 'e' || sentence[index] == 'E' || sentence[index] == 'i' || sentence[index] == 'I' || sentence[index] == 'o' || sentence[index] == 'O' || sentence[index] == 'u' || sentence[index] == 'U')
        {
            vowelCount++;
        }
        else
        {
            consonantCount++;
        }
        index++;
    }
    printf("Total Vowels : %d\n", vowelCount);
    printf("Total Consonants : %d\n", consonantCount);
}