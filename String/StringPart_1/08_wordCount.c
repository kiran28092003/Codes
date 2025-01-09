#include<stdio.h>
void main() {
    int index, wordCount = 0;
    char string[100];
    printf("Enter String : \n");
    fgets(string, sizeof(string), stdin);

    index = 0;
    while(string[index] != '\n') {
        while(string[index] == ' ') {
            index++;
        }
        if(string[index + 1] == ' ' || string[index + 1] == '\n') {
            wordCount++;
        }
        index++;
    }
    printf("%d word\n", wordCount);
}