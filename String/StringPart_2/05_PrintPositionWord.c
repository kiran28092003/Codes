// 5.which accept sentence from user and position from user and print the word at that position
#include<stdio.h>
void main() 
{
    int index, position, spaceCount = 0;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter Position : \n");
    scanf("%d", &position);

    if(position == 1)
    {
        while(sentence[index] != ' ')
        {
            printf("%c", sentence[index]);
            index++;
        }
    }
    else
    {
        index = 0;
        while(sentence[index] != '\n') 
        {
            if(sentence[index] != ' ' && sentence[index + 1] == ' ')
            {
                spaceCount++;
            }
            if(spaceCount == (position - 1))
            {
                while(sentence[index] != ' ' && sentence[index] != '\0')
                {
                    printf("%c", sentence[index]);
                    index++;
                }
                break;
            }
            index++;
        }
    }


}