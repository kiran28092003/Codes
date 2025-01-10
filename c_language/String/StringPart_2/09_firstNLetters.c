// 10.Write a program which accept string from user and copy first N charaters into some destination string.
#include<stdio.h>
void main() 
{
    int index, copyNum;
    char string[100], destinationString[100];
    printf("Enter String : \n");
    fgets(string, sizeof(string), stdin);

    printf("How Many Chars To Be Copied : \n");
    scanf("%d", &copyNum);
    index = 0;
    while(string[index] != '\n')
    {
        if(index > copyNum)
        {
            destinationString[index] = '\0';
            break;
        }
        destinationString[index] = string[index];
        index++;
    }
    
    printf("%s", destinationString);
}