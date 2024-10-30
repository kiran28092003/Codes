#include<stdio.h>
void main()
{
    int outerLoop, innerLoop;
    char sentence[100];
    printf("Enter sentence :\n");
    fgets(sentence, sizeof(sentence), stdin);
    
    outerLoop = 0;
    while(sentence[outerLoop] != '\n') 
    {
        if(sentence[outerLoop + 1] == ' ' || sentence[outerLoop + 1] == '\n') 
        {
            innerLoop = outerLoop;
            while(innerLoop >= 0 && sentence[innerLoop] != ' ') 
            {
                printf("%c", sentence[innerLoop]);
                innerLoop--;
            }

            if(sentence[outerLoop + 1] == ' ') 
            {
                printf(" ");  
            }
        }
        outerLoop++;
    }
}