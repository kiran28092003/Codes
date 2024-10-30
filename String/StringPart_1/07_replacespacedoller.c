#include<stdio.h>
void main() {
    int index;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    index = 0;
    while(sentence[index] != '\n') {
        if(sentence[index] == ' ') {
            printf("%c", '$'); 
        }
        else
        {
            printf("%c", sentence[index]);
        }
        index++;
    }
}